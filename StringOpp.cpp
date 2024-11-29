#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Farzan";
    char str2[50] = "MIT Farzan";
    char str3[100];
    char str4[100];
    int n1, n2, n3, n4, result1, result2;

    printf("\nEnter Third String: ");
    scanf("%s", &str3);
    printf("Received string is %s \n\n", str3);

    printf("\nEnter Fourth String: ");
    scanf("%s", &str4);
    printf("Received string is %s \n\n", str4);

    strcpy(str4, str3);
    n1 = strlen(str1);
    n2 = strlen(str2);
    n3 = strlen(str3);
    n4 = strlen(str4);

    printf("Length of the first string: %d\n", n1);
    printf("Length of the second string: %d\n", n2);
    printf("Length of the third string: %d\n", n3);
    printf("Length of the fourth string: %d\n", n4);


    result1 = strcmp(str3, str4);
    if (result1 <0 ) {
        printf("The first String is less than the second string");
    }
    else if (result1 > 0) {
        printf("The first String is more than the second string");
    }
    else {
        printf("Both are Equal");
    }

    result2 = strcmp(str1, str2);
    if (result2 <0 ) {
        printf("The first String is less than the second string");
    }
    else if (result2 > 0) {
        printf("The first String is more than the second string");
    }
    else {
        printf("Both are Equal");
    }

    strcat(str1, str3);
    printf("%s", str1);
    return 0;
}