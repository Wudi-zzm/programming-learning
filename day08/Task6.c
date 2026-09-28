#include <stdio.h>

int sumArray(int *numbers,int size){
    int sum = 0;
    for(int i=0;i<size;i++){
        sum += *(numbers + i);
    }
    return sum;
}

int main(){
    int numbers[5];
    printf("Please enter 5 numbers:\n");
    for(int i=0;i<5;i++){
        scanf("%d",&numbers[i]);
    }
    printf("Sum:%d",sumArray(numbers,5));

    return 0;
}