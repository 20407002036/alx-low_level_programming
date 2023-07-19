#include <stdio.h>
/**
* main -Entry point of the program
*
* Description: computes adn prints all the multiples of 3 and 5
* below 1024(exluded),followed by new line
*
* Return: Always 0 (Success)
*/
int main(void)
{int x;
int sum = 0;
for (x = 0; x < 1024; x++)
{
if(x % 3 == 0 || x % 5 == 0)
{sum = sum + x;
}
 }printf("%d\n",sum);
return (0);
}
