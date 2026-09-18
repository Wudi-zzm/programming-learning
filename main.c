#include <stdio.h>


int main () 
{
    int age,nextage;
    printf("Please enter your age:\n");
    scanf("%d",&age);
    nextage = age + 1;
    printf("Next year,you will be %d years old.\n",nextage);

    return 0;
}