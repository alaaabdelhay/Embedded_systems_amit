#include <stdio.h>


void main (){
    int x,y;
    printf("Welcome to our cafe\n\n");
    printf("Categories:\n\n");
    printf(" 1.Soft Drinks\n 2.Fresh juice\n");
    scanf("%d",&x);
    switch (x){
    case 1:
        printf("1.Tea\n2.Coffee\n3.Macha\n");
        scanf("%d",&y);
        switch (y){
        case 1:
            printf("Tea gonna be ready in minuets");
            break;
        case 2:
            printf("Coffee gonna be ready in minuets");
            break;
        case 3:
            printf("Matcha gonna be ready in minuets");
            break;
        }
        break;

    case 2:
        printf("1.Orange\n2.Lemon\n3.Strawberry\n");
        scanf("%d",&y);
        switch (y){
        case 1:
            printf("Orange gonna be ready in minuets");
            break;
        case 2:
            printf("Lemon gonna be ready in minuets");
            break;
        case 3:
            printf("Strawberry gonna be ready in minuets");
            break;
       break;
    }
}


}
