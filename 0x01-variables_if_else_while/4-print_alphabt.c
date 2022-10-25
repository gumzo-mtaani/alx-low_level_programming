#include<stdio.h>

/**
 * main - Entry point
 *
 * Description - program lists alphabet in lower case, excluding q and e
 *
 * Return: 0 on success
 *
 * Auth: John M. Ngatia
 * Filename: 4-print_alphabt.c
 */

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x != 'q' && x != 'e')
		{
			putchar(x);
		}
	}

	putchar('\n');

	return (0);

}
