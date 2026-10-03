#include <stdio.h>
#include "student.h"

void printStudent(Student s){
    printf("Name:%s\n",s.name);
    printf("ID:%d\n",s.id);
    printf("Score:%.1f\n",s.score);
    switch(s.status){
        case INACTIVE:
            printf("Status:INACTIVE\n");
            break;
        case ACTIVE:
            printf("Status:ACTIVE\n");
            break;
        case GRADUATED:
            printf("Status:GRADUATED\n");
            break;
        default:
            printf("Status:UNKNOWN\n");
            break;
    }
}

int findStudentById(Student students[],int size,int targetId){
    for(int i=0;i<size;i++){
        if(students[i].id == targetId){
            return i;
        }
    }
    return -1;
}

void updateScore(Student *s,double newScore){
    s->score = newScore;
}