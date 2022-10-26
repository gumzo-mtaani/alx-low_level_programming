#include<stdio.h>

/**
 * main - Entry Point
 *
 * Description: print lowercase alphabet in reverse followed by a new line
 *
 * Return: 0 on success
 *
 * Auth: John M. Ngatia
 * Filename: 7-print_tebahpla.c
 */

int main(void)
{

	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{

		putchar(alphabet);
	}

	putchar('\n');

	return (0);

}
