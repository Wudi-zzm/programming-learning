#include <stdio.h>

void changeNumber(int *p){
    *p = 100;
}

int main(){
    int a = 10;
    changeNumber(&a);
    printf("a = %d",a);

    return 0;
}