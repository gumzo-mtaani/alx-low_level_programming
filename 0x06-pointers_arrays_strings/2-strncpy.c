#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: array that returns
 * @src: pointer to receive string
 * @n: time to iterate
 * Return: dest
 */


char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < &&src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	i = i
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);

}
