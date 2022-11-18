#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: string
 *
 * Return: a pointer to the beginning of a substring
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, done;

	i = 0;
	j = 0;
	done = 0;

	while (haystack[i] != '\0')
	{
		if (needle[j] == haystack[i])
		{
			done = 1;
			j++;
		}
		else
		{
			done = 0;
			j = 0;
		}

		if (needle[j] == '\0' && done == 1)
			return ((haystack + i - j + 1));
		else if (needle[j] == '\0' && done == 0)
			return (haystack);
		i++;
	}

	return (NULL);
}
