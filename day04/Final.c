#include <stdio.h>

void reverseArray(int numbers[],int size){
    for(int i = 0;i<size/2;i++){
        int temp;
        temp = numbers[i];
        numbers[i] = numbers[size-1-i];
        numbers[size-1-i]=temp;
    }
}

int main(){
    int numbers[5];
    printf("Please enter 5 nunbers:");
    for(int i = 0;i<5;i++){
        scanf("%d",&numbers[i]);
    }
    reverseArray(numbers,5);
    printf("Reverse:\n");
    for(int i=0;i<5;i++){
        printf("%d ",numbers[i]);

    }

    return 0;
}