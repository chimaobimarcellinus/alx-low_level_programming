#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
 
int main(void)
{
int b, c;
for (b = 0; b < 9; b++)
{
for (c = b + 1; c < 10; c++)
{
if (b != c && c!= b)
{
putchar(b + '0');
putchar(c + '0');
if (b + c < 24)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
