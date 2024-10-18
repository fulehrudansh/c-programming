#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, avg;

    printf("Enter Number of Elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the Elements");
    for (i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array : ");
    for (i=0; i<n; i++) {
        if(arr[i] % 2 == 0) {
            printf("Even ");
        }
        else {
            printf("Odd");
        }
    }
    return 0;
}