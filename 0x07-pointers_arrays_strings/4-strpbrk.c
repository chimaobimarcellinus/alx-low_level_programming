#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
int i, k;
for (i = 0; s[i] != '\0'; i++)
{
for (k = 0; accept[k] != '\0';
{
if (s[i] == accept[k])
return (s + i);
}
}
return (0);
}
