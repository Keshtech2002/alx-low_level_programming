#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* create_array - create new array and fill with c char
* @size: size of the array
* @c: char to fill array
* Return: pointer to array or NULL if it fails
*/

char *create_array(unsigned int size, char c)
{
	char *m;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	m = (char *) malloc(sizeof(char) * size);

	if (m == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		*(m + i) = c;
	}
	return (m);
}
