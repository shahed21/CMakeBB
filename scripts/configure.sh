#!/bin/bash
# This script configures CMake for the project

source include.sh

cmake -S $ROOTDIR -B $BUILDDIR -DENABLE_SAMPLE_BUILD=ON -DENABLE_SAMPLE_ADDER_BUILD=ON