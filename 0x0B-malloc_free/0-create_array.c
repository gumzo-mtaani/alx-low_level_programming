#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array and starts with special character
 * @size: array size
 * @c: special character
 * Return: pointer to array or NULL on fail
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
