#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings using at
 *                  most an inputted number of bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len = 0, i, j = 0, k = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;
	len = len + n;

	concat = (char *) malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
		return (NULL);

	while (s1[j] != '\0')
	{
		*(concat + j) = *(s1 + j);
		j++;
	}
	while (s2[k] != '\0' && k < n)
	{
		*(concat + j) = *(s2 + k);
		k++;
		j++;
	}
	*(concat + j) = '\0';
	return (concat);
}
