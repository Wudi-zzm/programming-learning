#include <stdio.h>

void calculate(int a,int b,int *p,int *q){
*p = a + b;
*q = a * b;
}

int main()
{
    int a = 10;
    int b = 20;
    int sum;
    int product;

    calculate(a,b,&sum,&product);

    printf("Sum = %d\n", sum);
    printf("Product = %d\n", product);

    return 0;
}