#include <stdio.h>

int max(int a,int b){
    if(a>=b){
        return a;
    }else{
        return b;
    }
}

int main(){

    int a,b;
    printf("Please enter two integers:");
    scanf("%d %d",&a,&b);
    int c = max(a,b);
    printf("The larger number is %d",c);

    return 0;

}