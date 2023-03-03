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
 * _strcat  - concatenates two strings
 *
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to destination string
 */
char *_strcat(char *dest, char *src);

/**
 * _strncat - concatenates two strings.
 *
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be used.
 *
 * Return: destination string
 */
char *_strncat(char *dest, char *src, int n);

/**
 * _strncpy - copies a string
 *
 * @dest: Destination string
 * @src: Source string
 * @n: number of bytes to be used
 *
 * Return: destination string
 */
char *_strncpy(char *dest, char *src, int n);

/**
 * _strcmp - compares two strings
 *
 * @s1: First string
 * @s2: Second string
 *
 * Return: positive integer if s1 > s2, else negative integer.
 * 0 if they're equal.
 */
int _strcmp(char *s1, char *s2);

/**
 * reverse_array - reverses teh content of an array of integers
 *
 * @a: The array
 * @n: number of elements of the array
 *
 * Return: nothing
 */
void reverse_array(int *a, int n);

/**
 * string_toupper - changes all lowercase letter to uppercase
 *
 * @s: The string
 *
 * Return: The uppercase string
 */
char *string_toupper(char *s);

/**
 * cap_string - Capitalizes all words of a string
 *
 * @s: The strig
 *
 * Return: The capitalized words of the string
 */
char *cap_string(char *s);

/**
 * leet - encodes a string into 1337
 *
 * @s: The string
 *
 * Return: The encoded string
 */
char *leet(char *s);

/**
 * rot13 - encodes a strign using rot13
 *
 * @s: The string
 *
 * Return: The encoded string
 */
char *rot13(char *s);

/**
 * print_number - Prints an integer
 *
 * @n: The integer
 *
 * Return: nothing
 */
void print_number(int n);

/**
 * infinite_add - adds two numbers
 *
 * @n1: first number
 * @n2: second number
 * @r: buffer to store the result
 * @size_r: buffer size
 *
 * Return: the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r);

/**
 * print_buffer - prints a buffer
 *
 * @b: the buffer
 * @size: the size of the buffer
 *
 * Return: nothing
 */
void print_buffer(char *b, int size);

/**
 * _strlen - length of string
 *
 * @s: the string
 *
 * Return: the length of string
 */
int _strlen(char *s);

#endif
