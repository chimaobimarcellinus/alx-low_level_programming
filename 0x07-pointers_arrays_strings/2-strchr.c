#include <stdio.h>
#include "main.h"


/**
 * main - check the code
 * this code returns a character in a string
 * Return: Always 0.
 */
char *_strchr(char *s, char c)
{
while (*s)
{
s++;
if (*s == c)
{
return (s);	
}
return (0);
}
