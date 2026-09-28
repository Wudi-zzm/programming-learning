#include <stdio.h>

struct Student {
    char name[20];
    int id;
    double score;
};

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
    
    int targetId = 0;
    printf("Please enter the targetId:\n");
    scanf("%d",&targetId);
    int index = -1;
    for(int i=0;i<3;i++){
        if(students[i].id == targetId){
            index = i;
            break;
        }
    }
    if(index == -1){
        printf("Student not found.\n");
    }else{
        printf("Student found:\n");
        printf("Name:%s\n",students[index].name);
        printf("Id:%d\n",students[index].id);
        printf("Score:%.1f\n",students[index].score);
    }
    return 0;

}