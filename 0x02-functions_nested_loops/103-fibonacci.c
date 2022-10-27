#include<stdio.h>

/**
 * main - print fibonacci
 *
 * Return: 0 on success
 */

int main(void)
{
	unsigned int a, b, c, d, s;

	a = 1;
	b = 2;
	c = 3;
	s = 2;
	for (d = 2; d <= 32; d++)
	{
		if (c % 2 == 0)
			s = s + c;
		a = b;
		b = c;
		c = a + b;
	}
	printf("%u\n", s);
	return (0);

}
