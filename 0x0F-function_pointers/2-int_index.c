#include "function_pointers.h"
/**
* int_index - searches for an integer
* @array: input integer array
* @size: size of the array
* @cmp: pointer to the function to be used to compare values
* Return: -1 if size <=0 or element no matches -1
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int p;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (p = 0; p < size; p++)
	{
		if (cmp(array[p]) != 0)
			return (p);
	}

	return (-1);
}
