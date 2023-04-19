#include <stdio.h>
#include "main.h"

/**
 * this funtion prints a string follow by a new line
 * _putchar - print string to console
 * @s: pointer to the string to print
 * return: void
 * _put_recursion - loop through a string iin order to print to console
 */
void _puts_recursion(char *s)
{
if (*s == '\0')
{
putchar('\n');
}
else
{
_putchar(s[0]);
_puts_recursion(s + 1);
}
}
