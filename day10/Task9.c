#include <stdio.h>

struct Student {
    char name[20];
    int id;
    double score;
};

int main(){
    struct Student students[100];
    FILE *fp = fopen("student.txt","r");
    int count = 0;
    if(fp == NULL){
        printf("Failed to open file.\n");
        return 1;
    }
    while(fscanf(fp,"%19s %d %lf",
        students[count].name,
        &students[count].id,
        &students[count].score) == 3){
            count++;
        }
    printf("Total students:%d\n",count);
    for(int i=0;i<count;i++){
        printf("Name:%s\n",students[i].name);
        printf("ID:%d\n",students[i].id);
        printf("Score:%.1f\n",students[i].score);
    }
    
    fclose(fp);
    return 0;
}