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
        sum += arr[i];
    }
    avg = sum/n;
    printf("Sum = %f", sum);
    printf("\nAverage = %f", avg);
    return 0;
}