#include <stdio.h>

int main(){
    FILE *fp = fopen("student.txt","r");
    char name[20];
    int id;
    double score;
    if(fp == NULL){
        printf("Failed to open file.");
        return 1;
    }
    fscanf(fp,"%s %d %lf",name,&id,&score);
    printf("Name:%s\n",name);
    printf("ID:%d\n",id);
    printf("Score:%.1f\n",score);
    fclose(fp);

    return 0;
}