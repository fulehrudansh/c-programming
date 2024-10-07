/* Write a c Program to read three numbers from keyboard and find the maximum value among them */
#include <stdio.h>
        
 int main(){
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b) {
        if (a > c) {
            printf("%d is the Largest number.", a);
        }
        else {
            printf("%d is the Largest number.", c);
        }
    }
    else {
        if (b > c) {
            printf("%d is the Largest number.", b);
        }
        else {
            printf("%d is the Largest number.", c);
        }
    }
    return 0;
}