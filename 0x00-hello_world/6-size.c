#include <stdio.h>
/**
*main -Entry point
*
*Description: the function prints the size of the data types
*This is done using the 'sizeof'
*
*Return: Always 0 (Success)
*/
int main(void)
{printf("Size of char: %zu bytes\n", sizeof(char));
printf("Size of long int: %zu bytes\n", sizeof(int));
printf("Size of long long int: %zu bytes\n", sizeof(long long int));
printf("Size of float: %zu bytes\n", sizeof(float));
printf("Size of double: %zu bytes\n", sizeof(double));

return (0);
}
