#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps values of int
 * @member a - first variable
 * @member b - second variable
 *
 */
void swap_int(int *a, int *b)
{
int val;

val = *a;
*a = *b;
*b = val;
}
