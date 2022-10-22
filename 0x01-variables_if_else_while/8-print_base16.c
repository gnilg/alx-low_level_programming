#include <stdio.h>
/**
 * main- print of alphabet
 * Return: always 0
 */
int main(void)
{
char ch;
int nb;
for (nb = 48 ; nb <= 57; nb++)
putchar(nb);
for (ch = 'a' ; ch <= 'f' ; ch++)
putchar(ch);

putchar('\n');
return (0);
}
