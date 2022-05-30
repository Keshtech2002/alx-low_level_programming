#include "main.h"

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: char string
 * Return: converted decimal number or 0 if there is an unconvertable char
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num, base_2;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	for (base_2 = 1, num = 0, i--; i >= 0; i--, base_2 *= 2)
	{
		if (b[i] != '0')
			num = num + base_2;
	}

	return (num);
}
