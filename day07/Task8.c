#include <stdio.h>

int main(){
    int matrix[3][3];

    printf("Please enter 9 integers:\n");

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&matrix[i][j]);
        }
        printf("\n");
    }
    printf("Secondary diagonal:\n");
    int sum = 0;
    for(int i=0;i<3;i++){
        printf("%d ",matrix[i][2-i]);
        sum += matrix[i][2-i];
    }
    printf("\n");
    printf("Diagonal sum:%d",sum);


    return 0;
}
