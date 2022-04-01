#include "samplelib.h"
int samplelib_add(int a, int b) {
    return a+b;
}

char* samplelib_getLibraryName() {
    return PROJECT_NAME;
}

char* samplelib_getLibraryVersion() {
    return PROJECT_VER;
}

char* samplelib_getLibraryVersionMajor() {
    return PROJECT_VER_MAJOR;
}

char* samplelib_getLibraryVersionMinor() {
    return PROJECT_VER_MINOR;
}

char* samplelib_getLibraryVersionPatch() {
    return PROJECT_VER_PATCH;
}

