#include <stdio.h>
/**
* main -Entry point
*
* Description: the function print abcd using putchar
* I used the for loop to acheive this
* this program omits q and e in printing
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n = 97;
char c = (char)n;
for (c = 97 ; c <= 122 ; c++)
{
if (c == 101 || c == 113)
{
}
else
{
putchar(c);
}
}
putchar('\n');
return (0);
}
/** just realised there is another way to do this.
* just have the data type char  with a name.
* make a for loop using he name of the char data type
* remember characters are typed in a C Progran under ''
*if(letter != 'q' && letter != 'e')
*print the other letters 
*
*   :)
*/
