#include <stdio.h>

/**
 * main - main code function
 * @argc: arguments count
 * @argv: argument vectors
 * Return: void
 */

int main(int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
