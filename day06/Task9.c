#include <stdio.h>

void stringConcat(char destination[],char source[]){
    int i=0;
    for(;destination[i]!='\0';i++){

    }
    for(int j = 0;source[j]!='\0';j++){
        destination[i] = source[j];
        i++;
    }
    
    destination[i]='\0';
}

int main(){
    char destination[30] = "Hello ";
    char source[] = "World";

    stringConcat(destination,source);

    printf("destination:%s\n",destination);
    


    return 0;
}