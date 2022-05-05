#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* _strdup - This function copy string to new str created with malloc
* @str: string
* Return: Pointer to new string
*/

char *_strdup(char *str)
{
	char *duplicate;
	int index, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[index] != '\0')
		index++;
		len++;

	duplicate = (char *) malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
		return (NULL);

	while (str[index] != '\0')
		*(duplicate + index) = *(str + index);
		index++;

	*(duplicate + len) = '\0';

	return (duplicate);
}
