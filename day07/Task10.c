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
        for(int j=i+1;j<3;j++){
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}
