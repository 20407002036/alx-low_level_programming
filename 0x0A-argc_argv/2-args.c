#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - function that prints all arguements given to program
 *
 * @argc: number of arguements given to main
 * @argv: pointer to pointer of the sting of arguements
 *
 * Return: ALways 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
