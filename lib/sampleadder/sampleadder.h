/**
 * @file sampleadder.h
 * @author Shahed Rahim (shahed21@gmail.com)
 * @brief this is a sample header for the sampleadder.cpp file
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
 * @brief fundtion declaration for sampleadder_add function that is to be tested
 * 
 * @param a 
 * @param b 
 * @return int a+b
 */
int sampleadder_add(int a, int b);

/**
 * @brief function declaration for sampleadder_getLibraryName function
 * 
 * @return char* return the name of the library compiled in library memory
 */
const char* sampleadder_getLibraryName();

/**
 * @brief function declaration for sampleadder_getLibraryVersion function
 * 
 * @return char* return the version number of the library as a string
 */
const char* sampleadder_getLibraryVersion();

/**
 * @brief function declaration for sampleadder_getLibraryVersionMajor function
 * 
 * @return char* return the version major number of the library as a string
 */
const char* sampleadder_getLibraryVersionMajor();

/**
 * @brief function declaration for sampleadder_getLibraryVersionMinor function
 * 
 * @return char* return the version minor number of the library as a string
 */
const char* sampleadder_getLibraryVersionMinor();

/**
 * @brief function declaration for sampleadder_getLibraryVersionPatch function
 * 
 * @return char* return the version patch number of the library as a string
 */
const char* sampleadder_getLibraryVersionPatch();


#endif //SAMPLEADDER_H