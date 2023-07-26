#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int randomInt(int min, int max)
{
	return (min + rand() % (max - min + 1));
}


void generatePassword(char *password, int length)
{
char set[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int charsetSize = sizeof(set) - 1;

	for (int i = 0; i < length; i++)
	{
		password[i] = set[randomInt(0, charsetSize - 1)];
	}

	password[length] = '\0';
}

int main(void)
{
	srand(time(NULL));

	int minPasswordLength = 8;
	int maxPasswordLength = 12;

	int numPasswordsToGenerate = 5;

	for (int i = 0; i < numPasswordsToGenerate; i++)
	{
		int passwordLength = randomInt(minPasswordLength, maxPasswordLength);

		char password[maxPasswordLength + 1];
		
		generatePassword(password, passwordLength);

		printf("Generated Password %d: %s\n", i + 1, password);
	}

	return (0);
}
