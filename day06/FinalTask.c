#include <stdio.h>

void toUpperCase(char str[]){
    for(int i = 0;str[i]!='\0';i++){
        if(str[i] >= 'a'&& str[i] <='z'){
            str[i] = str[i] - 'a' + 'A';
        }
    }
}

int stringLength(char str[]){
    int count = 0;
    for(int i = 0;str[i] != '\0';i++){
        count++;
    }

    return count;

}

void stringCopy(char destination[],char source[]){
    int i = 0;
    for(;source[i]!='\0';i++){
        destination[i] = source[i];
    }
    destination[i]='\0';

}

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

void removeNewline(char str[]){
    for(int i = 0;str[i]!='\0';i++){
        if(str[i] == '\n'){
            str[i]= '\0';
            break;
        }
    }
}

int main(){
    char firstName[30];
    char lastName[30];
    char fullName[70];

    printf("Please enter your first name:\n");
    fgets(firstName,30,stdin);
    printf("Please enter your last name:\n");
    fgets(lastName,30,stdin);

    removeNewline(firstName);
    removeNewline(lastName);
    stringCopy(fullName,firstName);
    stringConcat(fullName," ");
    stringConcat(fullName,lastName);
    
    int length = stringLength(fullName);
    printf("Full name:%s\n",fullName);
    printf("Length:%d\n",length);
    toUpperCase(fullName);
    printf("Uppercase:%s",fullName);

    return 0;

}