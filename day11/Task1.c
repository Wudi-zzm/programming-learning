#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Please enter size:\n");
    scanf("%d",&n);
    if(n <= 0){
        printf("Invalid input.\n");
        return 1;
    }
    int *numbers = malloc(n * sizeof(int));
    if(numbers == NULL){
        printf("Memory allocation failed.\n");
        return 1;
    }
    printf("Please enter %d integers:\n",n);
    for(int i=0;i<n;i++){
        scanf("%d",numbers + i);
    }
    for(int i=0;i<n;i++){
        printf("%d ",numbers[i]);
    }
    free(numbers);
    return 0;
}