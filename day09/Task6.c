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
    
    int index = -1;
    for(int i=0;i<size;i++){
        if(students[i].id == targetId){
            return i;
        }
    }

    return -1;
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
    int targetId;
    printf("Please enter target Id:\n");
    scanf("%d",&targetId);
    int index = findStudentById(students,3,targetId);
    if(index == -1){
        printf("Student not found.\n");
    }else{
        double newScore;
        printf("Please enter new score:\n");
        scanf("%lf", &newScore);
        if(newScore <0 || newScore >100){
            printf("Invalid score.\n");
        }else{
            students[index].score = newScore;
            printf("Updated student:\n");
            printStudent(students[index]);
            
        }
        
    }

    return 0;

}