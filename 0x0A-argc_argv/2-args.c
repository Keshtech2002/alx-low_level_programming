#include <stdio.h>

/**
 * main -  a program that prints all arguments it receives
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
