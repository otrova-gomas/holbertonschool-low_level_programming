#include "main.h"

/**
 * _isalpha - function checks for alphabetic characters
 *
 *@c : variable
 *Return: 0
 */
int _isalpha(int c)
{
if (((c >= 'a' && c <= 'z')) || ((c >= 'A' && c <= 'Z')))
return (1);
else
return (0);
}
