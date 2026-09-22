#include <stdio.h>

int main(){
    int numbers[5];
    printf("Please enter 5 nunbers:");
    for(int i = 0;i<5;i++){
        scanf("%d",&numbers[i]);
    }
    printf("Reverse:");
    for(int i = 4;i>=0;i--){
        printf("%d ",numbers[i]);
    }

    return 0;
}

