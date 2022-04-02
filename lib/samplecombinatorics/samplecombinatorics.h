/**
 * @file samplecombinatorics.h
 * @author Shahed Rahim (shahed21@gmail.com)
 * @brief this is a sample header for the samplecombinatorics.cpp file
 * @version 0.1
 * @date 2022-03-31
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef SAMPLEADDER_H
#define SAMPLEADDER_H

#include <config.h>

/**
 * @brief fundtion declaration for samplecombinatorics_add function that is to be tested
 * 
 * @param a 
 * @param b 
 * @return int a+b
 */
int samplecombinatorics_add(int a, int b);

/**
 * @brief function declaration for samplecombinatorics_getLibraryName function
 * 
 * @return char* return the name of the library compiled in library memory
 */
const char* samplecombinatorics_getLibraryName();

/**
 * @brief function declaration for samplecombinatorics_getLibraryVersion function
 * 
 * @return char* return the version number of the library as a string
 */
const char* samplecombinatorics_getLibraryVersion();

/**
 * @brief function declaration for samplecombinatorics_getLibraryVersionMajor function
 * 
 * @return char* return the version major number of the library as a string
 */
const char* samplecombinatorics_getLibraryVersionMajor();

/**
 * @brief function declaration for samplecombinatorics_getLibraryVersionMinor function
 * 
 * @return char* return the version minor number of the library as a string
 */
const char* samplecombinatorics_getLibraryVersionMinor();

/**
 * @brief function declaration for samplecombinatorics_getLibraryVersionPatch function
 * 
 * @return char* return the version patch number of the library as a string
 */
const char* samplecombinatorics_getLibraryVersionPatch();


#endif //SAMPLEADDER_H