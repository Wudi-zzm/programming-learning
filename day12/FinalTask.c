#include <stdio.h>
#include <string.h>

typedef enum {
    INACTIVE,
    ACTIVE,
    GRADUATED
} Status;

typedef enum {
    SHOW_ALL = 1,
    SEARCH,
    UPDATE,
    EXIT
} MenuOption;

typedef struct {
    char name[20];
    int id;
    double score;
    Status status;
} Student;

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
    printf("Please input your choice:\n");
    int choice;
    printf("1.Show all students\n");
    printf("2.Search student by ID\n");
    printf("3.Update student score\n");
    printf("4.Exit\n");
    scanf("%d",&choice);
    switch(choice){
        case SHOW_ALL:{
            for(int i=0;i<3;i++){
                printStudent(students[i]);
            }
            break;}
        case SEARCH:{
            int targetId;
            printf("Please enter the targetId:\n");
            scanf("%d",&targetId);
            int index = findStudentById(students,3,targetId);
            if(index == -1){
            printf("Student not found.\n");
            }else{
            printf("Student found:\n");
            printStudent(students[index]);
            }
            break;}
        case UPDATE:{
            int targetId;
            printf("Enter ID:\n");
            scanf("%d",&targetId);
            int index = findStudentById(students,3,targetId);
            if(index == -1){
            printf("Student not found.");
            }else{
            double newScore;
            printf("Please enter newscore:\n");
            scanf("%lf",&newScore);
            if(newScore < 0 || newScore > 100){
                printf("Invalid score.\n");
            }else{
                updateScore(&students[index], newScore);
                printf("Student updated:\n");
                printStudent(students[index]);
            }}
            break;}
        case EXIT:{
            printf("Goodbye!\n");
            break;}
        default:{
            printf("Invalid option.\n");
            break;}
    }
    return 0;
}