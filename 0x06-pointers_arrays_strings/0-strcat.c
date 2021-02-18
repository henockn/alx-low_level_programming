#include "holberton.h"
/**
 * *_strcat - concatinate string
 * @dest: first string
 * @src: second string
 * Return: the returnin statment
 */
char *_strcat(char *dest, char *src)
{
for(i = 0; dest[i] != '\0'; ++i)
for(j = 0; src[j] != '\0'; ++j, ++i)
{
dest[i] = src[j];
}
dest[i] = '\0';
return dest;
}
