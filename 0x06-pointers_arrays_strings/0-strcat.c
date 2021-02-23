#include "holberton.h"
/**
 * *_strcat - concatinate string
 * @dest: first string
 * @src: second string
 * Return: the returnin statment
 */
char *_strcat(char *dest, char *src)
{
int i, j;
while (dest[i] != '\0')
{
i++;
}
 while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
return (dest);
}
