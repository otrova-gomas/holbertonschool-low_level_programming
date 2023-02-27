#include "main.h"
/**
*print_last_digit - Print the last digit of a number                                                                                                                                       
 * @num: number to print the last digit of                                                                                                                                                  
 *                                                                              
 * Return: The value of the last digit   
 */
int print_last_digit(int num)
{
int last_digit = num % 10;
if (last_digit < 0)
{
last_digit = (-1 *last_digit);
}
_putchar('0' + last_digit);

return (last_digit);

}
