#include "holberton.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: set of bytes to search for
 * Return: pointer to first instance of string
 **/

char *_strpbrk(char *s, char *accept)
{
unsigned int i;

while (*s)
{
for (i = 0; accept[i] != '\0'; i++)
{
if (*s == accept[i])
return (s);
}
s++;
}
return (0);
}
