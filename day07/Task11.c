#include <stdio.h>

int main(){
    int matrixA[3][3];
    int matrixB[3][3];
    int result[3][3];

    printf("Please enter Matrix A:\n");

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&matrixA[i][j]);
        }
    }

    printf("Please enter Matrix B:\n");

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&matrixB[i][j]);
        }
    }
    
    for(int i = 0;i<3;i++){
        for(int j = 0;j<3;j++){
            result[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }

    return 0;
}