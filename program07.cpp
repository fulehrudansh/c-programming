#include <stdio.h>

int main() {
    float s1, s2, s3, t, p;
    printf("Enter marks in subject 01: ");
    scanf("%f", &s1);
    printf("Enter marks in subject 02: ");
    scanf("%f", &s2);
    printf("Enter marks in subject 03: ");
    scanf("%f", &s3);

    t = s1+s2+s3;
    p = (t/300)*100;

    printf("Total Marks: %.2f", t);
    printf("Total Percentage: %.2f", p);

    if (p<=100 && p>=80) {
        printf("\nYou are in Distinction");
    }
    else if (p<80 && p>=60) {
        printf("\nYour are in 1st Division");
    }
    else if (p<60> && p>=40) {
        printf("\nYour are in 2nd Division");
    }
    else {
        printf("\nYou have failed!");
    }
    return 0;
}