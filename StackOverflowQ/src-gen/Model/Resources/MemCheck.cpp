
#include <cstdio>
#include <cstdlib>
#include <cassert>
#include <cstddef>
#include <iostream>

using namespace std;
#undef new

// Global flags set by macros in MemCheck.h
bool traceFlag = true;
bool activeFlag = false;

namespace {

// Memory map entry type
struct Info {
	void* ptr;
	const char* file;
	long line;
};

// Memory map data
const size_t MAXPTRS = 10000u;
Info memMap[MAXPTRS];
size_t nptrs = 0;

// Searches the map for an address
int findPtr(void* p) {
	for(size_t i = 0; i < nptrs; ++i)
		if(memMap[i].ptr == p)
			return i;
	return -1;
}

void delPtr(void* p) {
	int pos = findPtr(p);
	assert(pos >= 0);
	// Remove pointer from map
	for(size_t i = pos; i < nptrs-1; ++i)
		memMap[i] = memMap[i+1];
	--nptrs;
}

// Dummy type for static destructor
struct Sentinel {
	~Sentinel() {
	if(nptrs > 0) {
		cout << "Leaked memory at:" << endl;
		for(size_t i = 0; i < nptrs; ++i)
			cout << "\t" << memMap[i].ptr << " (file: " << memMap[i].file << ", line " << memMap[i].line << ")" << endl;
	}
	else
		cout << "No user memory leaks!" << endl;
	}
};

// Static dummy object
Sentinel s;

} // End anonymous namespace

// Overload scalar new
void*
operator new(size_t siz, const char* file, long line) {
	void* p = malloc(siz);
	if(activeFlag) {
		if(nptrs == MAXPTRS) {
			cout << "memory map too small (increase MAXPTRS)" << endl;
			exit(1);
		}
		memMap[nptrs].ptr = p;
		memMap[nptrs].file = file;
		memMap[nptrs].line = line;
		++nptrs;
	}
	if(traceFlag) {
		cout << "Allocated "<< (unsigned)siz <<" bytes at address "<< p << " ";
		cout << "(file: "<< file <<", line: "<< line << ")" << endl;
	}
	return p;
}

// Overload array new
void*
operator new[](size_t siz, const char* file, long line) {
	return operator new(siz, file, line);
}

// Override scalar delete
void operator delete(void* p, size_t a) {
	int i;
	i = findPtr(p);
	if(i >= 0) {
		free(p);
		assert(nptrs > 0);
		delPtr(p);
		if(traceFlag)
			cout << "Deleted memory at address "<< p << " ";
			cout << "(file: "<< memMap[i].file <<", line: "<< memMap[i].line << ")" << endl;
	}
	else if(!p && activeFlag)
		cout << "Attempt to delete unknown pointer: "<< p << endl;
}

// Override array delete
void operator delete[](void* p) {
	operator delete(p);
} ///:~

