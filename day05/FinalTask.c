#include <stdio.h>

void findMinMax(int numbers[],int size,int *q,int *t){
    
    int *p = numbers;
    *q = *p;
    *t = *p;   
    for(p = p+1;p<numbers+size;p++){

        if(*p > *q){
            *q = *p;
        }
        if(*p < *t){
            *t = *p;
        }
    }

}

int main(){
    int numbers[5];
    printf("Please enter 5 numbers:\n");
    for(int i = 0;i<5;i++){
        scanf("%d",&numbers[i]);
    }

    int max;
    int min;
    findMinMax(numbers,5,&max,&min);
    printf("Maximum:%d\n",max);
    printf("Minimum:%d\n",min);

    return 0;

}