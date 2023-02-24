#ifndef MAIN_HEADER
#define MAIN_HEADER

/**
 * _putchar - writes/prints a character to stdout
 *
 * @c: The character
 * Return: The character of interest
 */
int _putchar(char c);

/**
 * _isupper - checks for uppercase character
 *
 * @c: character of interest
 *
 * Return: 1 if tru, 0 otherwise
 */
int _isupper(int c);

/**
 * _isdigit - checks for a digit 0 through 9
 *
 * @c: digit to be checked
 *
 * Return: 1 if true, 0 otherwise
 */
int _isdigit(int c);

/**
 * mul - multiplies two integers
 *
 * @a: First integer
 * @b: Second integer
 *
 * Return: product of a and b
 */
int mul(int a, int b);

/**
 * print_numbers - print 0 to 9
 */
void print_numbers(void);

/**
 * print_most_numbers - print 0 to 9, skipping 2 and 4
 */
void print_most_numbers(void);

/**
 * more_numbers - print 0 to 14 ten times
 */
void more_numbers(void);

/**
 * print_line(int n) - print the character _ n times to draw a line
 *
 * @n: number of characters to draw
 */
void print_line(int n);

/**
 * print_diagonal - print character \ n timess
 *
 * @n: number of characters to draw
 */
void print_diagonal(int n);

/**
 * print_square - print a square of given size
 *
 * @size: size to draw
 */
void print_square(int size);

/**
 * print_triangle - print triangle with # with given size
 *
 * @size: size of triangle to draw
 */
void print_triangle(int size);

/**
 * print_number - print an inteher, without using long, arrays, or pointers
 *
 * @n: number to be printed
 */
void print_number(int n);

#endif
