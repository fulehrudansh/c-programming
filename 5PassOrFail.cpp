#include <stdio.h>

int main() {
    int a;

    printf("Enter your Marks: ");
    scanf("%d", &a);

    if (100 > a & a >= 30) {
        printf("Student has Passed.");
    }
    else if (a < 30 & a > 0){
        printf("Student has Failed.");
    }
    else {
        printf("Enter valid Marks out of hundred");
    }
    return 0;
}