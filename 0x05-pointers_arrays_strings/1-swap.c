#include<stdio.h>
#include "holberton.h"
/**
 * swap_int - swap pinter values
 * @a: a pointer
 * @b: b pointer
*/
void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
