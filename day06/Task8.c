#include <stdio.h>

void stringCopy(char destination[],char source[]){
    int i = 0;
    for(;source[i]!='\0';i++){
        destination[i] = source[i];
    }
    destination[i]='\0';

}

int main()
{
    char source[] = "ABC";
    char destination[20];

    stringCopy(destination, source);

    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);

    return 0;
}