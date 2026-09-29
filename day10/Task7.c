#include <stdio.h>

struct Student {
    char name[20];
    int id;
    double score;
};

int main(){
    struct Student students[3] = {
        {"Alice", 1001, 92.5},
        {"Bob", 1002, 85.0},
        {"Carol", 1003, 96.0}
    };
    FILE *fp = fopen("student.txt","w");
    if(fp == NULL){
        printf("Failed to open file.\n");
        return 1;
    }
    for(int i=0;i<3;i++){
        fprintf(fp,"%s %d %.1f\n",students[i].name,students[i].id,students[i].score);

    }
    fclose(fp);
    return 0;
}