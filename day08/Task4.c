#include <stdio.h>

void inspectArray(int numbers[],int size){
    printf("Inside function:\n");
    printf("sizeof(numbers):%zu\n",sizeof(numbers));
    printf("Size received:%d\n",size);

    printf("Elements:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
}

int main(){
    int numbers[5] = {10, 20, 30, 40, 50};
    printf("In main:\n");
    printf("sizeof(numbers):%zu\n",sizeof(numbers));
    printf("Number of elements:%zu\n",sizeof(numbers)/sizeof(numbers[0]));

    inspectArray(numbers,5);

    return 0;
}