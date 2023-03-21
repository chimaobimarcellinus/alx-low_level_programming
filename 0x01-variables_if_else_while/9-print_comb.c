#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
for(int x = 48; x <= 57; x++)
{
putchar(x);
if (x <= 56)
{
putchar(',');
}
putchar(' ');
}
putchar('\n');
return (0);
}
