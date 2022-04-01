/**
 * @file samplelib.h
 * @author Shahed Rahim (shahed21@gmail.com)
 * @brief this is a sample header for the samplelib.cpp file
 * @version 0.1
 * @date 2022-03-31
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef SAMPLELIB_H
#define SAMPLELIB_H

#include <config.h>

/**
 * @brief fundtion declaration for samplelib_add function that is to be tested
 * 
 * @param a 
 * @param b 
 * @return int a+b
 */
int samplelib_add(int a, int b);

/**
 * @brief function declaration for samplelib_getLibraryName function
 * 
 * @return char* return the name of the library compiled in library memory
 */
char* samplelib_getLibraryName();

/**
 * @brief function declaration for samplelib_getLibraryVersion function
 * 
 * @return char* return the version number of the library as a string
 */
char* samplelib_getLibraryVersion();

/**
 * @brief function declaration for samplelib_getLibraryVersionMajor function
 * 
 * @return char* return the version major number of the library as a string
 */
char* samplelib_getLibraryVersionMajor();

/**
 * @brief function declaration for samplelib_getLibraryVersionMinor function
 * 
 * @return char* return the version minor number of the library as a string
 */
char* samplelib_getLibraryVersionMinor();

/**
 * @brief function declaration for samplelib_getLibraryVersionPatch function
 * 
 * @return char* return the version patch number of the library as a string
 */
char* samplelib_getLibraryVersionPatch();


#endif //SAMPLELIB_H