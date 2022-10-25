#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns length of char
 * Return : the length of char
 * @s : a pointer of strings
 * Return : the value of len
 */


int _strlen(char *s)
{
int len = 0;
while (s[len] != '\0')
{
len++;
}
return (len);
}
