#include <stdio.h>
        
int main(){
    int a, b, op;
    printf("\nEnter two Numbers:");
    scanf("%d %d", &a, &b);

    printf("\nEnter your Choice:");
    scanf("%d", &op);
    
    switch(op) {
        case 1:
        printf("Addition of %d and %d is : %d", a, b, a+b);
        break;

        case 2:
        printf("Substraction of %d and %d is : %d", a, b, a-b);
        break;

        case 3:
        printf("Multiplication of %d and %d is : %d", a, b, a*b);
        break;

        case 4:
        printf("Division of %d and %d is : %d", a, b, a/b);
        break;

        case 5:
        printf("Square of %d and %d : %d %d", a, b, a*a, b*b);
        break;

        case 6:
        printf("Cube of %d and %d : %d %d", a, b, a*a*a, b*b*b);
        break;

        default:
        printf("The operation or input is incorrect");
        break;
    }
    return 0;
}