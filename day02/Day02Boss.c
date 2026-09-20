#include <stdio.h>

int main(){
    int num;
    printf("Guess the number:");
    scanf("%d",&num);
    while(num !=  42){
        if(num < 42){
            printf("Too small!\n");
            printf("Try again:");
            scanf("%d",&num);
        }else{
            printf("Too large!\n");
            printf("Try again:");
            scanf("%d",&num);
        }
    }
    printf("Correct!\n");

    return 0;
}