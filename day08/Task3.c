#include <stdio.h>

int main(){
    int numbers[5] = {10,20,30,40,50};
    int *p = numbers;

    printf("sizeof(numbers): %zu\n", sizeof(numbers));
    printf("sizeof(p): %zu\n", sizeof(p));
    printf("sizeof(int): %zu\n", sizeof(int));

    printf("Number of elements:%zu\n",sizeof(numbers)/sizeof(numbers[0]));

    return 0;
}