#ifndef STUDENT_H
#define STUDENT_H


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

void printStudent(Student s);
int findStudentById(Student students[],int size,int targetId);
void updateScore(Student *s,double newScore);

#endif