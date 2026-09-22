#include <stdio.h>

int calculateSum(int numbers[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum += numbers[i];

    }
    return sum;
}

void changeNumber(int n)
{
    n = 100;
}

int main(){
    int numbers[5];
    printf("Please enter 5 nunbers:");
    for(int i = 0;i<5;i++){
        scanf("%d",&numbers[i]);
    }
    
    printf("Sum:%d\n",calculateSum(numbers,5));

    int a = 10;

    changeNumber(a);

    printf("%d\n", a);
    return 0;
}