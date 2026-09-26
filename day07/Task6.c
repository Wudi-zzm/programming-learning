#include <stdio.h>

int main(){
    int matrix[3][3];

    printf("Please enter 9 integers:");

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&matrix[i][j]);
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    int max = matrix[0][0];
    int maxRow=0;
    int maxColumn;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(matrix[i][j] > max){
                max = matrix[i][j];
                maxRow = i;
                maxColumn = j;
            }
        }
    }
    printf("Maximum:%d\n",max);
    printf("Row:%d\n",maxRow+1);
    printf("Column:%d\n",maxColumn+1);
    

    return 0;
}
