#include <stdio.h>
int print_alphabet () {
   char ch;

   for(ch = 'a' ; ch <= 'z' ; ch++) {
      putchar(ch);
   }
   
   return(0);
}