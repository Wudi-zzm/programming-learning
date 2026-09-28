#include <stdio.h>

int main(){
    char word[] = "Hello";
    char *p = word;
    for(;*p != '\0';p++){
        printf("%c ",*p);
    }

    return 0;
}