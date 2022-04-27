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
	int i = 0, j;

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			j = 1;
			while ((needle[j] != '\0' && needle[j + i] != '\0')
					|| needle[j] == haystack[j + 1])
				j++;
		}
	}

	return (&haystack[i]);
}
