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
    
    double maxScore = students[0].score;
    int maxIndex = 0;
    for(int i=1;i<3;i++){
        if(maxScore < students[i].score){
            maxScore = students[i].score;
            maxIndex = i;
        }
    }
    
    printf("Top student:\n");
    printf("Name:%s\n",students[maxIndex].name);
    printf("Id:%d\n",students[maxIndex].id);
    printf("Score:%.1f\n",maxScore);
    return 0;

}