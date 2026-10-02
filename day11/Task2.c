#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 5;
    int *numbers = malloc(n * sizeof(int));
    if(numbers == NULL){
    printf("Memory allocation failed.\n");
    return 1;
    }
    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;
    for(int i=0;i<n;i++){
        printf("%d ",numbers[i]);
    }
    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d ",*(numbers + i));
    }
    free(numbers);
    numbers = NULL;
    return 0;
}