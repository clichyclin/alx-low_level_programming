#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

/**
 * main - Entry point
 *
 * The function outputs the type size of in 32bits environment
 * or the type size of in 64bits environment
 * compile it in 64 bits 
 * compile it in 32 bits 
 * Return: Always 0
 */

int main(void) {


  int charSize = sizeof(char);
  int intSize = sizeof(int);
  int longSize = sizeof(long int);
  int longlongSize = sizeof(long long int);
  int floatSize = sizeof(float);

  printf("Size of a char: %d byte(s)\n", charSize);
  printf("Size of an int: %d byte(s)\n", intSize);
  printf("Size of a long int: %d byte(s)\n", longSize);
  printf("Size of a long long int: %d byte(s)\n", longlongSize);
  printf("Size of a float: %d byte(s)\n", floatSize);



  return (0);

}
