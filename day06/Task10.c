#include <stdio.h>

void toUpperCase(char str[]){
    for(int i = 0;str[i]!='\0';i++){
        if(str[i] >= 'a'&& str[i] <='z'){
            str[i] = str[i] - 'a' + 'A';
        }
    }
}

int main(){
    char text[50] = "Hello World 123!";
    toUpperCase(text);
    printf("%s",text);

    return 0;
}