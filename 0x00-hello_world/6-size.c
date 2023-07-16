#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
char forchar;
int forint;
long forlong;
long long forlonglong;
float forfloat;
printf("Size of a char: %lu byte(s)\n", sizeof(forchar));
printf("Size of an int: %lu byte(s)\n", sizeof(forint));
printf("Size of a long int: %lu byte(s)\n", sizeof(forlong));
printf("Size of a long long int: %lu byte(s)\n", sizeof(forlonglong));
printf("Size of a float: %lu byte(s)\n", sizeof(forfloat));
return (0);
}
