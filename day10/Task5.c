#include <stdio.h>

int main(){
    FILE *fp = fopen("student.txt","w");
    char name[] = "Alice";
    int id = 1001;
    double score = 92.5;
    if(fp == NULL){
        printf("Failed to open file.");
        return 1;
    }
    fprintf(fp,"%s %d %.1f\n",name,id,score);
    fclose(fp);
    return 0;
}