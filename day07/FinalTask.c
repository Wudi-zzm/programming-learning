#include <stdio.h>

int main(){
    int scores[3][3];

    printf("Please enter scores:\n");

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&scores[i][j]);
        }
    }

    printf("Scores:\n");
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",scores[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(int i=0;i<3;i++){
        int sum = 0;
        for(int j=0;j<3;j++ ){
            sum += scores[i][j];
        }
        double average = sum/3.0 ;
        printf("Student %d average:%.2f\n",i+1,average);
    }

    printf("\n");

    for(int i=0;i<3;i++){
        int sum = 0;
        for(int j=0;j<3;j++ ){
            sum += scores[j][i];
        }
        double average = sum/3.0 ;
        printf("Course %d average:%.2f\n",i+1,average);
    }

    printf("\n");

    int max = scores[0][0];
    int student=0;
    int course=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(scores[i][j] > max){
                max = scores[i][j];
                student = i;
                course = j;
            }
        }
    }
    printf("Highest:%d\n",max);
    printf("Student:%d\n",student+1);
    printf("Course:%d\n",course+1);

    return 0;

}