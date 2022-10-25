#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: Program that writes alphabet in uper and lower case
 *	and leaves starts a new line
 *
 * Return: 0 on success
 *
 * Auth: John M. Ngatia
 * Filename: 3-print_alphabets.c
 */

int main(void)
{

	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(x);
	}
	
	putchar('\n');
	return (0);


}
