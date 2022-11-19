#include "main.h"

/**
 * _strlen_recursion - function to return length of a string
 * @s: variable input
 * Return: 0 on success
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
