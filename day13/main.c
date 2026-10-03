#include <stdio.h>
#include <string.h>
#include "student.h"

int main(){
    Student students[3];
    strcpy(students[0].name,"Alice");
    students[0].id = 1001;
    students[0].score = 92.5;
    students[0].status = ACTIVE;
    strcpy(students[1].name,"Bob");
    students[1].id = 1002;
    students[1].score = 85.0;
    students[1].status = INACTIVE;
    strcpy(students[2].name,"Carol");
    students[2].id = 1003;
    students[2].score = 96.0;
    students[2].status = GRADUATED;
    for(int i=0;i<3;i++){
        printStudent(students[i]);
    }
    int index = findStudentById(students, 3, 1002);

    if(index != -1){
        printf("Found student:\n");
        printStudent(students[index]);

        updateScore(&students[index], 90.0);

        printf("After update:\n");
        printStudent(students[index]);
    }

    return 0;
}