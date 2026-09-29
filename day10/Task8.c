#include <stdio.h>

struct Student {
    char name[20];
    int id;
    double score;
};

int main(){
    struct Student students[3];
    FILE *fp = fopen("student.txt","r");
    if(fp == NULL){
        printf("Failed to open file.\n");
        return 1;
    }
    for(int i=0;i<3;i++){
        fscanf(fp,"%19s %d %lf",students[i].name,&students[i].id,&students[i].score);

    }
    for(int i=0;i<3;i++){
        printf("Name:%s\n",students[i].name);
        printf("ID:%d\n",students[i].id);
        printf("Score:%.1f\n",students[i].score);
    }

    fclose(fp);
    return 0;
}