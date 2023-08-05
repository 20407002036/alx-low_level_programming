#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - function that adds the int given as aguements
 *
 * @argc: number of arguements given
 * @argv: pointer to the arguements
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;
	int j;
       	int sum;


	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];
		j = 0;

		while (arg[j] != '\0')
		{
			if (!isdigit(arg[j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}

		sum += atoi(arg);
	}

	printf("%d\n", sum);
	return (0);
}
