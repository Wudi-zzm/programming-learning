#include <stdio.h>

int main(){
    int numbers[5] = {10,20,30,40,50};

    for(int i=0;i<5;i++){
        printf("Index %d:%d %d\n",i,numbers[i],*(numbers + i));
    }

    printf("%p\n", (void *)(numbers + 1));
    printf("%p\n", (void *)&numbers[1]);

    return 0;
    
}