#include <stdio.h>
#include "main.h"
/*
* -_puts foncrion
*return : always 0
*/
void _puts(char str[]);
int main(){
    char chaine[] = "I do not fear computers. I fear the lack of them - Isaac Asimov"; 

    _puts(chaine);
    


    return (0);
}

void _puts(char str[]){
    int i = 0;
    char s = 'q';
    while (str[i] != '\0')
    {
        s = str[i];
        _putchar(s);
        i++;
    }
}
    

int _putchar(char c){
 return (write(1, &c, 1));
}

