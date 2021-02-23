#include "holberton.h"
/**
 * _memset - fills memory
 * @s: pointer to memory
 * @b: const byte
 * @n: number of bytes
 * Return: pointer to memory
 *
 */

char *_memset (char *s, char b, unsigned int n)
{
for (; n > 0; n--)
{
s[n - 1] = b;
}
return (s);
