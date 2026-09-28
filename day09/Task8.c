#include <stdio.h>

struct Student {
    char name[20];
    int id;
    double score;
};

void printStudent(struct Student s){
    printf("Name:%s\n",s.name);
    printf("ID:%d\n",s.id);
    printf("Score:%.1f\n",s.score);
}

int findStudentById(struct Student students[],int size,int targetId){
    
    for(int i=0;i<size;i++){
        if(students[i].id == targetId){
            return i;
        }
    }

    return -1;
}

void updateScore(struct Student *s,double newScore){
    s->score = newScore;
}

int main(){
    struct Student students[3];
    for(int i=0;i<3;i++){
        printf("Please enter name:\n");
        scanf("%19s",students[i].name);
        printf("Please enter ID:\n");
        scanf("%d",&students[i].id);
        printf("Please enter score:\n");
        scanf("%lf",&students[i].score);
    }
    printf("1.Show all students\n");
    printf("2.Search student by ID\n");
    printf("3.Update student score\n");
    printf("4.Exit");
    int a;
    scanf("%d",&a);
    if(a == 1){
        for(int i=0;i<3;i++){
             printStudent(students[i]);
        }
    }else if(a == 2){
        int targetId;
        printf("Enter ID:\n");
        scanf("%d",&targetId);
        int index = findStudentById(students,3,targetId);
        if(index == -1){
            printf("Student not found.");
        }else{
            printStudent(students[index]);
        }
    }else if(a == 3){
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
}
        }
    }else if(a == 4){
        printf("Goodbye!\n");
    }else{
        printf("Invalid option.\n");
    }

    return 0;
}