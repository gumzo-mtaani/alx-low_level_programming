#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @size: array size
 * @c: special character
 * Return: pointer to array or NULL on fail
 */

char *create_array(unsigned int size, char c)
{

	
	if (size == 0)
	{
		return (NULL);	
	}
	
	char *array = (char *) malloc(sizeof(char) * size);
	
	if (array == NULL)
	{
		return (NULL);
	}
	
	for (unsigned int i = 0; i < size; i++)
	{
		array[i] = c;
	}
	
	return (array);

}
