#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * @n: character to be analysed
 * Return: last digit
 */

int print_last_digit(int n)
{
	int x;
	
	if (n < 0)
		n = -n;
	x = n % 10;
	_putchar(x + '0');	
	return (x);
}
