#include <stdio.h>
#include "main.h"

/**
 * *_strstr -  function that locates a substring
 * @haystack: This is the main C string to be scanned
 * @needle: This is the small string to be searched with-in haystack
 * Return:This function returns a pointer to the first occurrence in
 * haystack
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
