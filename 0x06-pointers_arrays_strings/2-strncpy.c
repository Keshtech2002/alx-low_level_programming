#include <stdio.h>
#include "main.h"

/**
 * *_strncpy - copy n strings from src to dest
 * @dest: destination of copy
 * @src: where to copy from
 * @n: number of characters to copy
 * Return: pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != src[n])
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';
	return (dest);
}
