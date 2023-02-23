#include <stdio.h>

/**
* main - Prints numbers between 0 to 9. 
*
* Return: Always 0 (Success)
*/
int main(void)

{
int numbers;

for (numbers = 48; numbers < 58; numbers++)
{
putchar(numbers);
}
putchar('\n');
return (0);
}
