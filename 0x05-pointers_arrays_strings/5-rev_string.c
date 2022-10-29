#include "main.h"

/**
 * rev_string - reverse a string
 * @s: string
 *
 */
void rev_string(char *s)
{
	int i, j, temp, len;

	while (s[i] != '\0')
	{
		i++;
	}
	
	len = i;
	j = 0;
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
