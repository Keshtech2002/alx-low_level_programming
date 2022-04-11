#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
int a;
int d;

for (a = 0; a <= 9; a++)
{
for (d = a + 1; d <= 9; d++)
{
putchar(a + '0');
putchar(d + '0');

if (a < 8)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');

return (0);
}
