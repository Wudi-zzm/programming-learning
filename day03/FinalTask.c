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
    int start , end ;
    printf("Please enter start and end:");
    scanf("%d %d",&start,&end);
    if(start <= 0 || start > end || end <= 0){
        printf("Invalid input.");

    }else{
        int count=0;
        for(int i = start;i<=end;i++){
            
            if( isPrime(i)){
                printf("%d ",i);
                
                count += 1;
            }
        }
        printf("\n");
        printf("Total:%d",count);
    }

    return 0;
}