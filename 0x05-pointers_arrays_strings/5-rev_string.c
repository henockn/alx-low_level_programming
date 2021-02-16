#include<stdio.h>
#include "holberton.h"
/**
 * rev_string - function to reverse a string
 * @s: the string
 *
 */
void rev_string(char *s)
{
int i = 0;
int j = 0;
char rev[100];
while (s[i] != '\0')
{
i++;
}
for (; i > 0; i--)
{
rev[j] = s[i - 1];
j++;
}
while (i < j)
{
s[i] = rev[i];
i++;
}
}
