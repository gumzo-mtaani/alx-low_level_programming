#include "main.h"

/**
 * print_line - prints line based on provided value n
 * @n: value provided
 */

void print_line(int n)
{

	int x;

	if (n <= 0)
		_putchar('\n');
	for (x = 0; x <= n; x++)
		_putchar('\n');
	_putchar('\n');

}
