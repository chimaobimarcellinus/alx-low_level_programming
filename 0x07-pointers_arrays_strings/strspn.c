#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != s[i]; j++)
{
if (accept[j] == '\0')
{return (i);
}
}
}
return (0);
}
