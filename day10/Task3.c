#include <stdio.h>

int main(){
    FILE *fp = fopen("hello.txt","r");
    char line[100];
    if(fp == NULL){
        printf("Failed to open file.");
        return 1;
    }
    while(fgets(line,100,fp) != NULL){
        printf("%s",line);
    }
    fclose(fp);
    return 0;
}