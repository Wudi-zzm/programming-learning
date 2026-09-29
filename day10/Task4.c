#include <stdio.h>

int main(){
    FILE *fp = fopen("hello.txt","r");
    int ch;
    if(fp == NULL){
        printf("Failed to open file.\n");
        return 1;
    }
    while((ch = fgetc(fp)) != EOF){
        printf("%c",ch);
    }
    fclose(fp);
    return 0;
}