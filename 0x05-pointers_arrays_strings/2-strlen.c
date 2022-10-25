#include "main.h"
#include <stdio.h>

/**
 * _strlen - return length of char
 * @s : a pointer of strings
 * return : int the value
 */


int _strlen(char *s)
{
int len = 0;
while(s[len] != "\0")
{
len++;
}
return len;
}