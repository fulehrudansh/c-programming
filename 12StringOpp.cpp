#include <stdio.h>
#include <string.h>

int main() {
    char dest[50] = "This is_";
    char src[50] = "MIT ADT University Pune";
    char usrc[100];
    int s1, s2, result;

    printf("\nEnter user String: ");
    scanf("%s", &usrc);
    printf("Received string is %s \n\n", usrc);

    s1 = strlen(src);
    s2 = strlen(dest);
    printf("Source: %s\n", src);
    printf("Length of the string: %d\n", s1);
    printf("Destination: %s\n", dest);
    printf("Length of Destination: %d\n", s2);

    printf("\n\nDestination Before: %s\n", dest);
    
    strcat(dest, src);
    printf("Concatenated string: %s\n", dest);
    
    strcpy(dest, src);
    printf("Destination after copy: %s\n", dest);
    result = strcmp(src, dest);
    
    if (result <0 ) {
        printf("The first String is less than the second string");
    }
    else if (result > 0) {
        printf("The first String is more than the second string");
    }
    else {
        printf("Both are Equal");
    }
    return 0;
}