#include <stdio.h>
/**
* main - prints the numbers 1-100 printing
* fizz in multiples of 3, buzz in multiples
* of 5 and fizzbuzz in both multiples of 3 and 5
*
* Description: Omits actual numbers and prints text
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz ");
}
else if (i % 3 == 0)
{
printf("Fizz ");
}
else if (i % 5 == 0)
{
printf("Buzz ");
}
else{
printf("%d ", i);
}
}
printf("\n");
return (0);
}
