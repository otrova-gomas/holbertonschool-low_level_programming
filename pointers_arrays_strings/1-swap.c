#include "main.h"
#include <stdio.h>

/**
 *
 *swap_int - swaps values of int
 *@a first variable 
 *@b second variable
 * 
 */
void swap_int(int *a, int *b)
{
  
  int val ;

val = *a;
*a = *b;
*b = val;

}
