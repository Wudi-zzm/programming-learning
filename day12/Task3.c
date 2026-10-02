#include <stdio.h>

typedef enum {
    LOW = 10,
    MEDIUM,
    HIGH
} Level;

int main(){
    Level level = HIGH;
    printf("%d\n",level);
    printf("%d %d %d\n",LOW,MEDIUM,HIGH);
    return 0;
}

