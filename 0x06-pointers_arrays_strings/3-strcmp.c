#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: parameter 1
 * @s2: parameter 2
 * Return: 0 on success
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0;
	int b = 0;

	while (s1[a] != '\0' && b == 0)
	{
		b = s1[a] - s2[a];
		a++;
	}
	return (b);
}
