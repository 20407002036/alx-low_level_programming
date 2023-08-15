#include <stdio.h>
/**
* main - prints the name of the file it's compiled from
*
* Return: 0 Always (Success)
*/
int main(void)
{
printf("%s\n", __BASE_FILE__);

return (0);
}
