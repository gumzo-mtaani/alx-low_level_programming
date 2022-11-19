#include "main.h"

/**
 * _print_rev_recursion - the function
 * @s: variable input
 * Return: 0 on success
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
		_print_rev_recursion(s + 1);
	else
		return;
	_putchar(*s);
}
