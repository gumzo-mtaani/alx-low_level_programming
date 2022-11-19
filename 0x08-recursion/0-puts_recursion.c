#include "main.h"

/**
 * _puts_recursion - function like puts
 * @s: variable input
 * Return: 0 on success
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
