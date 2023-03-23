## Mandatry Tasks
### 0-print_name.c
> Function prints a name
* Prototype: `void print_name(char *name, void (*f)(char *));`

### 1-array_iterator.c
> Function executes a function given as a parameter on each element of an array
* Prototype: `void array_iterator(int *array, size_t size, void (*action)(int));`
* where `size` is the size of the array
* and `action` is a pointer to the function you need to use

### 2-int_index.c
> Prototype: `int int_index(int *array, int size, int (*cmp)(int));`
* where `size` is the number of elements in the array `array`
* `cmp` is a pointer to the function to be used to compare values
* `int_index` returns the index of the first element for which the `cmp` function does not return `0`
* If no element matches, return `-1`
* If size <= `0`, return `-1`

### 3
> Program to perform simple operations
* Requires a header file to contain function prototypes and datat stuctures used by the program.
* A function that contains the operations
* A function that selects the corect function to perform the operation asked by the user
* A file to contain the main function only
