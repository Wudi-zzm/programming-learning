#include <stdio.h>

int main(){
    int matrix[3][3];

    printf("Please enter 9 integers:");

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&matrix[i][j]);
        }
        printf("\n");
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",matrix[j][i]);
        }
        printf("\n");
    }

    return 0;
}
