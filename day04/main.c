#include <stdio.h>

int main(){
    int numbers[5];
    printf("Please enter 5 integers:");
    for(int i=0;i<5;i++){
        scanf("%d",&numbers[i]);
    }
    int max = numbers[0];
    for(int i=0;i<5;i++){
        if (numbers[i] > max) {
            max = numbers[i];
            }
    }

    printf("Maximum:%d",max);
    return 0;

}