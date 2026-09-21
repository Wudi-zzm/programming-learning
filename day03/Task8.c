#include <stdio.h>

int isPrime(int n){
    if(n<=1){
        return 0;
    }else{
        for(int i = 2;i < n;i++){
        if (n % i == 0){
            return 0;
        }
    }

    return 1;

    }
    
}

int main(){
    int n;
    printf("Please enter an intger:");
    scanf("%d",&n);
    if(isPrime(n)){
        printf("%d is a prime number.",n);
    }else{
        printf("%d is not a prime number.",n);
    }

    return 0;
}