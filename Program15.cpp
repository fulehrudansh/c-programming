#include <stdio.h>

void calculator() {
    int op;
    float num1, num2, result;

    printf("\nSimple Calculator");
    printf("\n1. Addition");
    printf("\n2. Substraction");
    printf("\n3. Multiplication");
    printf("\n4. Division");
    printf("\n5. Exit\n");

    while (1) {

        printf("\n\nEnter your choice: ");
        scanf("%d", &op);

        if (op == 5) {
            printf("\nExiting...");
            break;
        }

        printf("Enter first number: ");
        scanf("%f", &num1);

        printf("Enter second number: ");
        scanf("%f", &num2);

        switch(op) {
            case 1:
                result = num1 + num2;
                printf("%.2f + %.2f = %.2f", num1, num2, result);
                break;

            case 2:
                result = num1 - num2;
                printf("%.2f - %.2f = %.2f", num1, num2, result);
                break;
            
            case 3:
                result = num1 * num2;
                printf("%.2f x %.2f = %.2f", num1, num2, result);        
                break;    
            
            case 4:
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("%.2f / %.2f = %.2f", num1, num2, result);
                    break;
                }
                else {
                    printf("\nDivision with zero is not defined.");
                    break;
                }
            
            default:
                printf("\nInvalid Choice. please choose a valid option.");
        }
    }
}

int main() {
    calculator();
    return 0;
}