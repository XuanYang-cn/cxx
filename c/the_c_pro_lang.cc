#include<stdio.h>

int
main(){
    int c;
    int out;
    while((c = getchar()) != EOF){
        if (c == '\n'){
            putchar('\\');
            putchar('n');
        } else if (c == '\t'){
            putchar('\\');
            putchar('t');
        } else if (c == '\b'){
            putchar('\\');
            putchar('b');
        } else {
            putchar(c);
        }
    }
}
