#include <stdio.h>
#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: first string in comparison
 * @s2: second string in comparison
 * Return: 0 if they are equal, 1 if s1>s2, -1 if s2>s1 in ascii
 */

int _strcmp(char *s1, char *s2)
{
	int i, flag = 0;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
		{
			continue;
		}
		else if (s1[i] > s2[i])
		{
			flag = 1;
			break;
		}
		else if (s1[i] < s2[i])
		{
			flag = -1;
			break;
		}
	}

	if (flag == 1)
	{
		return (1);
	}
	else if (flag == -1)
	{
		return (-1);
	}

	return (0);
}
