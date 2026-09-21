#include <stdio.h>

int main(){
    int start , end;
    printf("Please enter start and end:");
    scanf("%d %d",&start,&end);
    if(start > end || start < 0 ){
        printf("Invalid input.");
    }else{
        for(;start <= end;start++){
        if(start % 7 == 0){
            break;
        }
    }if(start>end){
        printf("No number found.");
    }else{
        printf("The first number divisible by 7 is %d",start);
    }

    }
    
    return 0;
}