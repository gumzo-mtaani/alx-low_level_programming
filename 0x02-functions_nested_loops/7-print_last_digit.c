#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * @n: character to be analysed
 * Return: last digit
 */

int print_last_digit(int n)
{
	int x, y;

	x = n % 10;
	if (x < 0)
		x = -x;
	y = '0' + 1;
	_putchar(y);
	return (x);


}
