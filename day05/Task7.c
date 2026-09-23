#include <stdio.h>

int main(){
    int numbers[5] = {10,20,30,40,50};
    int *p = numbers;

    for(;p<numbers+5;p++){

        printf("%d ",*p);
       
    }

    return 0;

}