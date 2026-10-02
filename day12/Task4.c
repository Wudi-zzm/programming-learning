#include <stdio.h>

typedef enum {
    INACTIVE,
    ACTIVE,
    GRADUATED
} Status;

typedef struct {
    char name[20];
    int id;
    double score;
    Status status;
} Student;

void printStudent(Student s){
    printf("Name:%s\n",s.name);
    printf("ID:%d\n",s.id);
    printf("Score:%.1f\n",s.score);
    switch(s.status){
        case INACTIVE:
            printf("Status:INACTIVE\n");
            break;
        case ACTIVE:
            printf("Status:ACTIVE\n");
            break;
        case GRADUATED:
            printf("Status:GRADUATED\n");
            break;
        default:
            printf("Status:UNKNOW\n");
            break;
    }
}

int main(){
    Student s1 = {
        "Alice",
        1001,
        92.5,
        ACTIVE
    };
    printStudent(s1);
    return 0;

}