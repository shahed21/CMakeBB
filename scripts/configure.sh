#!/bin/bash
# This script configures CMake for the project

source include.sh

cmake -S $ROOTDIR -B $BUILDDIR -DENABLE_SAMPLE_BUILD=ON -DENABLE_SAMPLE_ADDER_BUILD=ON -DENABLE_SAMPLE_COMBINATORICS_BUILD=ON -DENABLE_SAMPLE_ADDER_INSTALL=ON -DENABLE_SAMPLE_COMBINATORICS_INSTALL=ON -DENABLE_PROJECT_INSTALL=ON