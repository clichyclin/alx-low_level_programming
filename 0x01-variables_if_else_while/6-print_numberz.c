#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Prints base 10 numbers
 
 * Return: 0 for success
 */

int main(void)
{
  int num = 48;

  while (num <= 57)
    {
      putchar(num);
      num++;
    }
  putchar('\n');
  return (0);
}
