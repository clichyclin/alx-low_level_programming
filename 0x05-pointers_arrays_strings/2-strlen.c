#include "holberton.h"

/**
 * _strlen - returns the length of the string
 * @s: input string to count
  * Return: length of string as int
 **/

int _strlen(char *s)
{
int i = 0;

while (s[i] != '\0')
{
i++;
}
return (i);
}
