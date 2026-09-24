#include <stdio.h>

int main(){
    char word[] = "Hello";
    printf("The string is:%s\n",word);
    printf("First character:%c\n",word[0]);
    printf("Third character:%c\n",word[2]);
    printf("Characters:\n");
    for(int i = 0;word[i] != '\0';i++){
        printf("%c ",word[i]);
    }

    return 0;
}