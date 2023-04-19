#include "main.h"

/**
 * using recursion
 * this function prin t out string
 * s - pointer to the array
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
