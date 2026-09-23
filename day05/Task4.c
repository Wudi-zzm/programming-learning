#include <stdio.h>

void swap(int *p,int *q){
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

int main (){
    int a = 10;
    int b = 20;

    swap(&a,&b);
    printf("a = %d\n",a);
    printf("b = %d\n",b);

    return 0;
}