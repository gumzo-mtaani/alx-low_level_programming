#include "main.h"

int _sqrt(int, int);
/**
 * _sqrt_recursion - sqrt using recursion
 * @n: variable
 * Return: square root of a number
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - recursive square root
 * @n: number
 * @i: number of times
 * Return: the answer
 */

int _sqrt(int n, int i)
{
	int square = i * i;

	if (square > n)
		return (-1);
	if (square == n)
		return (i);
	return (_sqrt(n, i + 1));
}
