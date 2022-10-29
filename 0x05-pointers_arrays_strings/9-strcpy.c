#include "main.h"

/**
 * _strcpy - copies a string pointed to by src
 * @dest: array that returns
 * @src: pointer that receives the string
 * Return: parameter dest
 */

char *_strcpy(char *dest, char *src)
{
	int n = 0;
	int i;

	while (src[n] != '\0')
	{
		n++;
	}

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
