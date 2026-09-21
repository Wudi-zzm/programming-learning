#include <stdio.h>

int main(){
    int n;
    printf("Please enter n:");
    scanf("%d",&n);
    if(n<= 0){
        printf("Invalid input.");
    }else{
        for (int i=1;i<=n;i++){
           
            if (i % 3 == 0){
                continue;
            }
             printf("%d ",i);
        }
    }

    return 0;
}