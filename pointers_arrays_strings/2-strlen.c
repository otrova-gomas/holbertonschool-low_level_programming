#include "main.h"

/**
 *_strlen - write a function that rreturns the lenght of a string
 *@string: to be meassured
 *Return: lenght of @string
 */
int _strlen(char *string)

{
int len = 0;

while (*string != '\0')
{
len++;
string++;
}
return (len);
}
