#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns len of char
 * @s : a pointer of strings
 * Return : length of strings
 * len : value of strlen
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
