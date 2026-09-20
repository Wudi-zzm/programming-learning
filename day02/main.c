#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    printf("Please enter n:");
    scanf("%d",&n);
    if (n <=0 ){
        printf("Invalid number.");
    }else{
        for(int i=1;i <= n;i++){
        if (i % 2 == 0){
            sum = sum + i;
        }
    }
    printf("Sum of even numbers = %d\n",sum);
    }
   return 0;
    
}