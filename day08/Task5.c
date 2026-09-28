#include <stdio.h>

void doubleArray(int numbers[],int size){
    for(int i=0;i<size;i++){
        *(numbers + i) *= 2;
    }
}

int main(){
    int numbers[5];
    printf("Please enter 5 numbers:\n");
    for(int i=0;i<5;i++){
        scanf("%d",&numbers[i]);
    }

    doubleArray(numbers,5);

    for(int i=0;i<5;i++){
        printf("%d ",numbers[i]);
    }

    return 0;
}