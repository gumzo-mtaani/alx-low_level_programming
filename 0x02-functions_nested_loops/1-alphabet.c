#include "main.h"

/**
 * print_alphabet - Print lowercase alphabet
 *
 * Program prints alphabet using _putchar
 *
 *Return 0 on success
 *
 *
 */

void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}

	_putchar('\n');


}
