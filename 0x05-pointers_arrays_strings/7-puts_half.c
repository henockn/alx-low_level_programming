#include<stdio.h>
#include "holberton.h"
/**
 * puts_half - print out half of the sting
 * @str: the string
 *
 */
void puts_half(char *str)
{
int i, j = 0;

while (str[i] != '\0')
{
i++;
}
j = i / 2;
if (i % 2 == 1)
{
j++;
}

while (j < i)
{
_putchar(str[j]);
j++;
}
_putchar('\n');
}
