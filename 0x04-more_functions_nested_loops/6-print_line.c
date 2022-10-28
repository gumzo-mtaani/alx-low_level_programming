#include "main.h"

/**
 * print_line - prints line based on provided value n
 * @n: value provided
 */

void print_line(int n)
{

	int x = 1;

	while (x <= n)
	{
		_putchar(95);
		x++;
	}
	_putchar('\n');
}
