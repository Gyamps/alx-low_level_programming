# C DYNAMIC/SHARED LIBRARIES
Creating dynamic libraries in Linux.   

## Description of important files:
0. libdynamic.so - dynamic library containing some functions as libdynamic.so
1. 1-create_dynamic_lib.sh - shell script to create dynamic library called liball.so
2. helper_functions_dir - all .c files hold functions; all .o files were used to create dynamic library
3. main.h - included function prototypes of functions in library
4. 100-operations.so - created this C dynamic library to be imported into python program 100-tests.py

