#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 5;
    int *numbers = malloc(n * sizeof(int));
    if(numbers == NULL){
        printf("Memory Allocation failed,\n");
        return 1;
    }
    *numbers = 10;
    *(numbers+1) = 20;
    *(numbers+2) = 30;
    *(numbers+3) = 40;
    *(numbers+4) = 50;
    int newSize = 8;
    int *temp = realloc(numbers,newSize * sizeof(int));
    if(temp ==  NULL){
        printf("Reallocation failed.\n");
        free(numbers);
        return 1;
    }else{
        numbers = temp;
    }
    numbers[5] = 60;
    numbers[6] = 70;
    numbers[7] = 80;
    for(int i=0;i<newSize;i++){
        printf("%d ",numbers[i]);
    }
    free(numbers);
    numbers = NULL;
    return 0;
}