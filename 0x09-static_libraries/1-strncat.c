#include <stdio.h>
#include "main.h"

/**
 * *_strncat - concatenate two strings
 * @dest: character string to concatenate to
 * @src: character string that is concatenated
 * @n: number of strings from the src to concatenate
 *Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != src[n])
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	return (dest);
}
