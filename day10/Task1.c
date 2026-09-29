#include <stdio.h>

int main(){
    FILE *fp = fopen("hello.txt","w");
    if(fp == NULL){
        printf("Failed to open file.\n");
        return 1;
    }
    fprintf(fp,"Hello,file!\n");
    fprintf(fp,"This is Day10.");
    fclose(fp);

    return 0;
}

