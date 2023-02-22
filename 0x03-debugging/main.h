#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/**
 * positive_or_negative - function prints out if integer is positive or
 * negative
 *
 * Function requires 1 int argument
 *
 * @i: The integer argument
 *
 * Return: nothing
 */
void positive_or_negative(int i);

/**
 * largest_number - prints out the largest of 3 numbers
 *
 * Function requires 3 int arguments
 *
 * @a: First int args
 * @b: Second int args
 * @c: Third int args
 *
 * Return: largest integer
 */
int largest_number(int a, int b, int c);

/**
 * print_remaining_days - converts a date to the day of year and determines
 * how many days are left in the year, taking leap year into consideration
 *
 * Function takes 3 integer arguments
 *
 * @month: First integer args (month in number format)
 * @day: Second integer args (day of month)
 * @year: Third integer args (year)
 *
 * Return: nothing
 */
void print_remaining_days(int month, int day, int year);

/**
 * convert-day - converts day of month to day of year, without accounting
 * for leap year
 *
 * Function takes 2 integer arguments
 *
 * @month: First int args (month in number format)
 * @day: Second integer args (day of month)
 *
 * Return: day of year
 */
int convert_day(int month, int day);

#endif
