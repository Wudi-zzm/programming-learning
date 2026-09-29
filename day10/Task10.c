#include <stdio.h>

struct Student {
    char name[20];
    int id;
    double score;
};

void printfStudent(struct Student s){
    printf("Name:%s\n",s.name);
    printf("ID:%d\n",s.id);
    printf("Score:%.1f\n",s.score);
}

int findStudentById(struct Student students[],int size,int targertId){
    for(int i=0;i<size;i++){
        if(targertId == students[i].id){
            return i;
        }
    }
    return -1;
}

void updateScore(struct Student *s,double newScore){
    s->score = newScore;
}

int loadStudents(struct Student students[],int maxSize){
    FILE *fp = fopen("student.txt","r");
    if(fp == NULL){
        printf("Failed to open file.\n");
        return 0;
    }
    int count = 0;
    while(count < maxSize && fscanf(fp,"%19s %d %lf",
        students[count].name,
        &students[count].id,
        &students[count].score) == 3){
            count++;
        }
    fclose(fp);
    return count;
}

void saveStudents(struct Student students[],int count){
    FILE *fp = fopen("student.txt","w");
    for(int i=0;i<count;i++){
        fprintf(fp,"%s %d %.1f\n",students[i].name,
                                  students[i].id,
                                  students[i].score);
    }
    fclose(fp);
}

int main(){
    struct Student students[100];
    int count = loadStudents(students,100);
    int choice;
    printf("1.Show all students\n");
    printf("2.Search student by ID\n");
    printf("3.Update student score\n");
    printf("4.Exit\n");
    printf("Please input your choice:\n");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        for(int i=0;i<count;i++){
            printfStudent(students[i]);
        }
        break;
    case 2:
        int targetId1;
        printf("Please enter the targetId:\n");
        scanf("%d",&targetId1);
        int index1 = findStudentById(students,count,targetId1);
        if(index1 == -1){
            printf("Student not found.\n");
        }else{
            printf("Student found:\n");
            printfStudent(students[index1]);
        }
        break;
    case 3:
        int targetId2;
        printf("Enter ID:\n");
        scanf("%d",&targetId2);
        int index2 = findStudentById(students,count,targetId2);
        if(index2 == -1){
            printf("Student not found.");
        }else{
            double newScore;
            printf("Please enter newscore:\n");
            scanf("%lf",&newScore);
            if(newScore < 0 || newScore > 100){
                printf("Invalid score.\n");
            }else{
                updateScore(&students[index2], newScore);
                saveStudents(students,count);
                printf("Student updated:\n");
                printfStudent(students[index2]);
        }}
        break;
    case 4:
        printf("Goodbye!\n");
        break;
    default:
        printf("Invalid input.\n");
        break;
    }
    return 0;
}