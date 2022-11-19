#include "main.h"

/**
 * _pow_recursion - function
 * @x: variable 1
 * @y: variable 2
 * Return: -1 if y<0 else 0 on success
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
