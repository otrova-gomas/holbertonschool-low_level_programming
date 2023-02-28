#include "main.h"
/**
 * add - Adds two integers
 * @num1: First integer
 * @num2: Second integer
 *
 * Return: Sum of the two integers
 */
int add(int num1, int num2)
{
    int sum = num1 + num2;
int num, digit, sign;

if (sum == 0)
{
_putchar('0');
_putchar('\n');
return 0;
}
if (sum < 0)
{
sign = -1;
sum *= -1;
_putchar('-');
}
else
{
sign = 1;
}

num = sum;
while (num > 0)
{
digit = num % 10;
_putchar(digit + '0');
num /= 10;
}

_putchar('\n');

return sign * sum;
}
