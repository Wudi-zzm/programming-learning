#include <stdio.h>

typedef struct {
    char name[20];
    int id;
    double score;
} Student;

void printStudent(Student s){
    printf("Name:%s\n",s.name);
    printf("ID:%d\n",s.id);
    printf("Score:%.1f\n",s.score);
}

int main(){
    Student s1 = {
        "Alice",
        1001,
        92.5
    };

    printStudent(s1);

    return 0;

}