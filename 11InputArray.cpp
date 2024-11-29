#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, avg;

    printf("Enter Number of Elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the Elements\n");
    for (i=0; i<n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("Array : ");
    for (i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}