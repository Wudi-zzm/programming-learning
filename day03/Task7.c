#include <stdio.h>

int oddeven(int a){
    if(a % 2 == 0){
        return 0;
    }else{
        return 1;
    }
}

int main(){
    int n;
    printf("Please enter an integer:");
    scanf("%d",&n);
    if(oddeven(n)){
        printf("%d is odd",n);
    }else{
        printf("%d is even",n);
    }

    return 0;
}