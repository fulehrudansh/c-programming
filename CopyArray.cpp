#include <stdio.h>

int main() {
    int org[10] = {2,4,5,4,3,4,5,4,5,7};
    int cop[10];
    int i;

    for (i=0 ; i<10 ; i++) {
        cop[i] = org[i];
    }

    printf("Orignal -> Compiled\n");
    for (i=0 ; i<10 ; i++) {
        printf("    %2d     %2d     \n", org[i], cop[i]);
    }
    return 0;
}