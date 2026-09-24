#include <stdio.h>

int stringLength(char str[]){
    int count = 0;
    for(int i = 0;str[i] != '\0';i++){
        count++;
    }

    return count;

}

int main(){
    char name[20];
    printf("Please enter your name:\n");
    fgets(name,20,stdin);
    for(int i = 0;name[i]!='\0';i++){
        if(name[i] == '\n'){
            name[i]= '\0';
            break;
        }
    }
    int length = stringLength(name);
    printf("Hello,%s!\n",name);
    printf("Length:%d\n",length);

    return 0;
}