#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted arrayay of
 * integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: first index where value is located or -1 otherwise
*/
int binary_search(int *array, size_t size, int value)
{
	int beg = 0, end, mid, y;

	end = size - 1;
	while (beg <= end)
	{
		printf("Searching in array: ");

		for (y = beg; y <= end; y++)
			y < end ? printf("%d, ", array[y]) : printf("%d\n", array[y]);

		mid = (beg + end) / 2;

		if (array[mid] == value)
			return (mid);

		else if (value < array[mid])
			end = mid - 1;

		else
			beg = mid + 1;
	}
	return (-1);
}