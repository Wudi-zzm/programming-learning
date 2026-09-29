#include <stdio.h>

int main(){
    FILE *fp = fopen("hello.txt","r");
    char line[100];
    if(fp == NULL){
    printf("Failed to open file.\n");
    return 1;
    }
    fgets(line,100,fp);
    printf("%s",line);
    fgets(line,100,fp);
    printf("%s",line);
    fclose(fp);
    return 0;
}