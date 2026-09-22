#include <stdio.h>

int main(){
    int numbers[5];
    printf("Please enter 5 nunbers:");
    for(int i = 0;i<5;i++){
        scanf("%d",&numbers[i]);
    }
    for(int i=0;i<2;i++){
        int temp;
        temp = numbers[i];
        numbers[i] = numbers[4-i];
        numbers[4-i] = temp;
     }
    printf("Reverse:");
    for(int i = 0;i<5;i++){
        printf("%d ",numbers[i]);
    }

    return 0;

}

