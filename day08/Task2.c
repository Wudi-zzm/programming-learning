#include <stdio.h>

int main(){
    int numbers[3] = {10, 20, 30};
    int *p = numbers;

    for(int i=0;i<3;i++){
        printf("Value:%d\n",*p);
        printf("Address:%p\n",(void*)p);
        p++;
    }
    printf("%zu\n",sizeof(int));
    char letters[3] = {'A', 'B', 'C'};
    char *q = letters;
    printf("%p\n", (void *)q);
    q++;
    printf("%p\n", (void *)q);

    return 0;
}