#include "main.h"

/**
 * factorial - placeholder
 * @n: the variable integer
 * Return: -1 if n<0 else return 0 on success
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
