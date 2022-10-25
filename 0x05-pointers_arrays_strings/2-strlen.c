#include "main.h"
#include <stdio.h>

/**
 * _strlen - return length of char
 * return : the length of char
 * @s : a pointer of strings
 *return : the value of len
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
