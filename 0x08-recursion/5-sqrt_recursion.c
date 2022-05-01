#include "main.h"
int sqrt_calc(int n, int x);

/**
 * _sqrt_recursion - returns the natural square root of a num
 * @n: the number to find its sqr root
 * Return: sqr root
 */

int _sqrt_recursion(int n)
{
	return (sqrt_calc(n, 1));
}

/**
 * sqrt_calc - used to use to get the root
 * @n: the number to find its sqr root
 * @x: sqr root
 * Return: sqr root or -1
 */

int sqrt_calc(int n, int x)
{
	if (x * x == n)
		return (x);
	if (x * x > n || n <= 0)
		return (-1);
	return (sqrt_calc(n, x + 1));
}
