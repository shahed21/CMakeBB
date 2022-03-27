# CMake Bare Bones
This project is a bare bones project to start a new C project in CMake.

## File and Folder Organization Structure
The following folder structure is available for your use.

    .
    ├── lib                     # Library files
    │   ├── adder               # Placeholder library source code folder
    │   │   ├── adder.c
    │   │   ├── adder.h
    │   │   └── CMakeLists.txt
    │   └── CMakeLists.txt
    ├── scripts                 # Tools and shell scripts
    │   ├── include.sh
    │   ├── configure.sh
    │   ├── build.sh
    │   └── execute.sh
    ├── src                     # Source files
    │   ├── main.c
    │   └── CMakeLists.txt
    ├── test                    # Automated tests
    ├── .gitignore
    ├── CMakeLists.txt
    └── readme.md

The following top level folder structure is generated after code is compiled.

    .
    ├── build                   # Compiled files
    ├── lib                     # Library files
    ├── scripts                 # Tools and utilities
    ├── src                     # Source files
    ├── test                    # Automated tests
    ├── .gitignore
    ├── CMakeLists.txt
    └── readme.md

## What to change for your project
The following items have to be changed to port this for a new project, or an existing one.

### Project Name
The project name needs to be renamed.

### Git Init
Old Git has to be removed. Git has to be reinitialized with new Project Name.

### Libraries
The `adder` library has to be replaced with new project libraries.

## Commands
### Configure CMake
The following command, run in the `scripts/` folder, can be used to configure CMake for the entire project.

    ./configure.sh

### Build Code
The following command, run in the `scripts/` folder, can be used to build executable for the entire project.

    ./build.sh

### Execute Code
The following command, run in the `scripts/` folder, can be used to execute the executable for the project.

    ./execute.sh

### Run Tests
The following command, run in the `scripts/` folder, can be used to run tests to validate the project.

    ./runtests.sh
