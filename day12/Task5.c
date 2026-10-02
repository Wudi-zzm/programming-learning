#include <stdio.h>

typedef enum {
    SHOW_ALL = 1,
    SEARCH,
    UPDATE,
    EXIT
} MenuOption;

int main(){
    int choice;
    printf("Please enter your choice:\n");
    scanf("%d",&choice);
    switch(choice){
        case SHOW_ALL:
            printf("SHOW_ALL\n");
            break;
        case SEARCH:
            printf("SEARCH\n");
            break;
        case UPDATE:
            printf("UPDATE\n");
            break;
        case EXIT:
            printf("EXIT\n");
            break;
        default:
            printf("Invalid option\n");
            break;
    }
    return 0;
}