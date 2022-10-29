#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: string
 *
 * Return: string in reverse
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		i++;
	}
	while (i > 0)
	{
		i--;
		_putchar(s[i]);
	}
	_putchar('\n');

}
