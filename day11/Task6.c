#include <stdio.h>
#include <stdlib.h>

int main(){
    int *numbers = malloc(8 * sizeof(int));
    if(numbers == NULL){
        printf("Memory allocation failed.\n");
        return 1;
    }
    int a = 10;
    for(int i=0;i<8;i++){
        numbers[i] = a;
        a += 10;
    }
    int *temp = realloc(numbers,5 * sizeof(int));
    if(temp == NULL){
        printf("Reallocation failed.\n");
        free(numbers);
        return 1;
    }else{
        numbers = temp;
    }
    for(int i=0;i<5;i++){
        printf("%d ",numbers[i]);
    }
    free(numbers);
    numbers = NULL;
    return 0;
}