#include "main.h"

/**
 * print_most_numbers - prints numbers
 *
 * Return:
 */

void print_most_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		for (x != 2 && x != 4)
		{
			_putchar(x + '0');
		}
	_putchar('\n');
	}

}
