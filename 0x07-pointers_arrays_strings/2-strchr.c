#include "holberton.h"
/**
 * _strchr - locate a char in a string
 * @src: source string
 * @c: the charachter to be searched
 * Return: pointer to char
 *
 */

char *_strchr(char *src, char c)
{
int i;

if (src == NULL)
{
return (NULL);
}

for (i = 0; src[i] != '\0'; i++)
{
if (src[i] == c)
{
return (&src[i]);
}

}
if (src[i] == c)
{
return (&src[i]);
}
return (NULL);
}
