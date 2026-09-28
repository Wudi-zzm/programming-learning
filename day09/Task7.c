#include <stdio.h>

struct Student {
    char name[20];
    int id;
    double score;
};
void updateScore(struct Student *s,double newScore){
    s->score = newScore;
}
void printStudent(struct Student s){
    printf("Name:%s\n",s.name);
    printf("ID:%d\n",s.id);
    printf("Score:%.1f\n",s.score);
}

int main(){
    struct Student s1 = {
        "Alice",
        1001,
        92.5
    };
    struct Student *p = &s1;
    updateScore(p,98.0);
    printStudent(s1);

    return 0;
}