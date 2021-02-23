#include "holberton.h"
/**
 * _memcpy - copies memory area
 * @dest: destination memory
 * @src: source memory
 * @n: bytes to copy
 * Return: pointer to memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
for (; n > 0; n--)
{
dest[n - 1] = src[n - 1];
}
return (dest);
}
