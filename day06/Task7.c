#include <stdio.h>

int stringEqual(char str1[],char str2[]){
    for(int i = 0;(str1[i]!='\0')||(str2[i]!='\0');i++){
        if(str1[i] != str2[i]){
            return 0;
        }
    }
    return 1;

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
    char word1[20];
    char word2[20];
    printf("Please enter two words:\n");
    fgets(word1,20,stdin);
    fgets(word2,20,stdin);
    removeNewline(word1);
    removeNewline(word2);
    if(stringEqual(word1,word2)){
        printf("Equal\n");
    }else{
        printf("Not equal\n");
    }

    return 0;
}