#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that prints all arguements given to program
 *
 * @argc: number of arguements given to main
 * @argv: pointer to pointer of the sting of arguements
 *
 * Return: ALways 0 (Success)
 */
int main(int argc, char **argv)
{
  while(argc--)
    printf("%s\n", *argv++);
  exit(EXIT_SUCCESS);
}
