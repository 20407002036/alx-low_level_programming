#include <stdio.h>
#include <stdlib.h>
/**
 * main - function the prints result of multiplication of numbers from argv[]
 *
 * @argc: number of arguements given in commandline
 * @argv: pointer to array that stores the arguemets from commandline
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int result = 0;




	if (argc == 3)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");

		return (1);
	}

	return (0);
}
