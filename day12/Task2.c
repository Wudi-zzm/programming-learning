#include <stdio.h>

typedef enum {
    INACTIVE,
    ACTIVE,
    GRADUATED
} Status;

int main(){
    Status s = ACTIVE;
    printf("%d\n",s);
    printf("%d %d %d\n",INACTIVE,ACTIVE,GRADUATED);
    return 0;
}