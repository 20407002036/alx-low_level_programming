#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the name of the file it's compiled from
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
  char *name = __BASE_xFILE__;
  
  printf("%s\n",name);

  return (0);
}
