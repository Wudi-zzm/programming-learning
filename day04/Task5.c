#include <stdio.h>

int main(){
    int numbers[5];
    int n;
    printf("Please enter 5 numbers:");
    for(int i = 0;i<5;i++){
        scanf("%d",&numbers[i]);
    }

    printf("Please enter a number to search:");
    scanf("%d",&n);
    int found = 0;int index;
    for(int i = 0;i<5;i++){
        if(n == numbers[i]){
            found = 1;
            index = i;
            break;
        }
    }
    if(found){
        printf("Found at index %d",index);
    }else{
        printf("Not found.");
    }
    return 0;
}