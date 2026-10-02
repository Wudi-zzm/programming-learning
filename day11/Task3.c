#include <stdio.h>
#include <stdlib.h>

int main(){
    int n = 5;
    int *numbers = calloc(n,sizeof(int));
    if(numbers == NULL){
        printf("Memory allocatoin failed.\n");
        return 1;
    }
    for(int i=0;i<n;i++){
        printf("%d ",numbers[i]);
    }
    printf("\n");
    numbers[2] = 100;
    for(int i=0;i<n;i++){
        printf("%d ",numbers[i]);
    }
    free(numbers);
    numbers = NULL;
    return 0;
}