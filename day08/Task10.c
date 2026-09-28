#include <stdio.h>

int main(){
    char word1[] = "Hello";
    const char *word2 = "World";
    printf("%s\n",word1);
    printf("%s\n",word2);

    word1[0] = 'Y';
    printf("%s\n",word1);
    printf("%s\n",word2);

    printf("%zu\n",sizeof(word1));
    printf("%zu\n",sizeof(word2));

    return 0;


}