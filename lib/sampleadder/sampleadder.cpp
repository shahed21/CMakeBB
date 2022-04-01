#include "sampleadder.h"
int sampleadder_add(int a, int b) {
    return a+b;
}

const char* sampleadder_getLibraryName() {
    return PROJECT_NAME;
}

const char* sampleadder_getLibraryVersion() {
    return PROJECT_VER;
}

const char* sampleadder_getLibraryVersionMajor() {
    return PROJECT_VER_MAJOR;
}

const char* sampleadder_getLibraryVersionMinor() {
    return PROJECT_VER_MINOR;
}

const char* sampleadder_getLibraryVersionPatch() {
    return PROJECT_VER_PATCH;
}

