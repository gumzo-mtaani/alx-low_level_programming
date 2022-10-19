/*
 * File: 101-quote.c
 * Auth: John M. Ngatia
 */

#include <stdio.h>
#include <unistd.h>

/**
 * main - Print out "and that piece of art is useful
 * 			- Dora Korpar, 2015-10-19"
 * Return: 1 if success.
 */
int main(void)
{
		write(2, "and that piece of art is useful - Dora Korpar, 2015-10-19\n", 58);
	
		return (1);
}

