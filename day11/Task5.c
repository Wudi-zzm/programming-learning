#include <stdio.h>
#include <stdlib.h>

int main(){
    int *numbers = malloc(5 * sizeof(int));
    if(numbers == NULL){
    printf("Memory allocation failed.\n");
    return 1;
    }
    printf("Before realloc: %p\n",(void *)numbers);
    int *temp = realloc(numbers,1000 * sizeof(int));
    if(temp == NULL){
        printf("Reallocation failed.\n");
        free(numbers);
        return 1;
    }else{
        numbers = temp;
    }
    printf("After realloc: %p\n", (void *)numbers);
    free(numbers);
    numbers = NULL;
    return 0;
}