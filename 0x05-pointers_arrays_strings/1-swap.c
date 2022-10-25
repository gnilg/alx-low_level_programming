#include "main.h"
#include <stdio.h>

/**
 * swap_int - change rhe value of two int
 * @a : pointer of first value
 * @b : pointer of the second value
 * 
 * return : void
 * 
 */

void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;


}