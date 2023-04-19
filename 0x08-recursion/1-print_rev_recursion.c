#include "main.h"

/**
 *_print_rev_recursion - this function Prints a string in reverse recursively
 *@s:Pointer to the strint to be printed
 *Returns nothing that is void
 */
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
