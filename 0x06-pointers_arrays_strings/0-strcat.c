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
i++;
for (j = 0; src[j] != '\0'; j++)
{
dest[i] = src[j];
i++;
}
dest[i] = src[j];
return (dest);
}
