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
    printf("Student list:\n");
    for(int i=0;i<3;i++){
        printf("%d.%s %d %.1f\n",i+1,students[i].name,students[i].id,students[i].score);
    }
    
    return 0;

}