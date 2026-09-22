#include <stdio.h>

int main(){
    int numbers[5];
    printf("Please enter 5 numbers:");
    for(int i = 0;i<5;i++){
        scanf("%d",&numbers[i]);
    }
    int max = numbers[0];
    int min = numbers[0];
    for(int i = 1;i<5;i++){
        if(max < numbers[i]){
            max = numbers[i];
        }else if(min > numbers[i]){
            min = numbers[i];
        }
    }

    printf("Maximum:%d \n",max);
    printf("Minimum:%d \n",min);

    return 0;
}