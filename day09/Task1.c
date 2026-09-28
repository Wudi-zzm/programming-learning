#include <stdio.h>

struct Student {
    char name[20];
    int id;
    double score;
};

int main(){
    struct Student s1 = {
        "Alice",
        1001,92.5
    };

    printf("Name:%s\n",s1.name);
    printf("ID:%d\n",s1.id);
    printf("Score:%.1f\n",s1.score);

    return 0;

}