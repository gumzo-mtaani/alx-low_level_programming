#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string
 *
 */
void rev_string(char *s)
{
	int i, j, temp, len;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	j = 0;
	len = i;
	i--;

	while (j < len / 2)
	{
		temp = s[j];
		s[j] = s[i];
		s[i] = temp;
		i--;
		j++;

	}
}
