#include <stdio.h>

int main (){
    int n;
    printf("Please enter n:");
    scanf("%d",&n);
    if(n <= 0){
        printf("Invalid input.");
    }else{
        for (int i=1;i<= n;i++){
            for(int j=n;j>=i;j--){
            printf("*");
            }
        printf("\n");
        }
    }

    return 0;
}