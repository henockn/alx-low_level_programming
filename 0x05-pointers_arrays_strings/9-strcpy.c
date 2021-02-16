#include<stdio.h>
#include "holberton.h"
/**
 * *_strcpy - copy string function
 * @dest: string to be copid to
 * @src:string to copy from
 *Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
while (i >= 0)
{
dest[i] = src[i];
if (src[i] == '\0')
return (dest);
i++;
}
return (dest);
}
