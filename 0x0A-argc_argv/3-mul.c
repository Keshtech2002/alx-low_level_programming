#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - a program that multiplies two numbers args
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int multiply;

	if (argc > 1)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
	}
	else
	{
		printf("Error\n");
		return (0);
	}

	multiply = num1 * num2;
	printf("%d\n", multiply);
	return (0);
}
