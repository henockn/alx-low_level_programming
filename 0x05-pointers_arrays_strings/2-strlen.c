#include<stdio.h>
#include "holberton.h"
/**
 * _strlen - function to calculate lengeth of a string
 * @s: string passed
 * Return: length of the string
 */
int _strlen(char *s)
{
int i=0;
while(s[i] != '\0')
{
i++;
}
return (i);
}
