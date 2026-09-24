#include <stdio.h>

int stringLength(char str[]){
    int count = 0;
    for(int i = 0;str[i] != '\0';i++){
        count++;
    }

    return count;

}

int main(){
    char word[] = "12345678";

    int length = stringLength(word);

    printf("Length: %d\n", length);

    return 0;
}