#include <stdio.h>

int findMax(int *numbers,int size){
    int max = *numbers;
    for(int i=0;i<size;i++){
        if(max < *numbers){
            max = *numbers;
        }
        numbers++;
    }
    return max;
}

int main(){
    int numbers[5];
    printf("Please enter 5 numbers:\n");
    for(int i=0;i<5;i++){
        scanf("%d",&numbers[i]);
    }
    printf("Maximum:%d",findMax(numbers,5));

    return 0;
}