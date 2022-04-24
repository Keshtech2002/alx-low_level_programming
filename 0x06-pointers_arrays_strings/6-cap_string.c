#include <stdio.h>
#include "main.h"

/**
 * *cap_string - capitalize each word in the string
 * @c: string to work on
 * Return: return the capitalized string
 */

char *cap_string(char *c)
{
	int i = 0;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (c[i] >= 'a' && c[i] <= 'z')
			{
				c[i] = c[i] - 32;
				continue;
			}
		}
		if (c[i] == ' ')
		{
			++i;
			if (c[i] >= 'a' && c[i] <= 'z')
			{
				c[i] = c[i] - 32;
				continue;
			}
		}
		else
		{
			if (c[i] >= 'A' && c[i] <= 'Z')
			{
				c[i] = c[i] + 32;
			}
		}
	}

	return (c);
}
