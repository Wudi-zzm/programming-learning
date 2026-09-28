#include <stdio.h>

struct Student {
    char name[20];
    int id;
    double score;
};

int main(){
    struct Student s1;
    printf("Please enter name:\n");
    scanf("%s19",s1.name);
    printf("Please enter ID:\n");
    scanf("%d",&s1.id);
    printf("Please enter score:\n");
    scanf("%lf",&s1.score);
    printf("Student information:\n");
    printf("Name:%s\n",s1.name);
    printf("ID:%d\n",s1.id);
    printf("Score:%.1f\n",s1.score);

    return 0;

}