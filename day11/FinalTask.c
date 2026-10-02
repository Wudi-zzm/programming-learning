#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[20];
    int id;
    double score;
};

void printStudent(struct Student students){
    printf("Name:%s\n",students.name);
    printf("ID:%d\n",students.id);
    printf("Score:%.1f\n",students.score);
}

int main(){
    int count = 2;
    struct Student *students = malloc(count * sizeof(struct Student));
    if(students == NULL){
        printf("Memory allocation failes.\n");
        return 1;
    }
    strcpy(students[0].name,"Alice");
    students[0].id = 1001;
    students[0].score = 92.5;
    strcpy(students[1].name,"Bob");
    students[1].id = 1002;
    students[1].score = 85.0;
    int newCount = 3;
    struct Student *temp = realloc(students,newCount * sizeof(struct Student));
    if(temp == NULL){
        printf("Reallocation failed.\n");
        free(students);
        return 1;
    }else{
        students = temp;
        count = newCount;
    }
    strcpy(students[2].name,"Carol");
    students[2].id = 1003;
    students[2].score = 96.0;
    for(int i=0;i<count;i++){
        printStudent(students[i]);
    }
    free(students);
    students = NULL;
    return 0;

}