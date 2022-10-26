#include<stdio.h>

/**
 * main - Entry Point
 *
 * Description: print all numbers of base 16 in lowercase followed by new line
 *
 * Return: 0 on success
 *
 * Auth: John M. Ngatia
 * Filename: 8-print_base16.c
 */

int main(void)
{

	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}

	i = 'a';

	while (i <= 'f')
	{
		putchar(i);
		i++
	}

	putchar('\n');

	return (0);


}
