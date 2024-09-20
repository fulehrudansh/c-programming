/* Write a c Program to read three numbers from keyboard and find the maximum value among them */
#include <stdio.h>
        
 int main(){
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a>b){
        if (a>c){
            printf("a has the maximum value");
        }
        else {
            printf("c has the maximum value");
        }
        if (b>a){
            if (b>c){
                printf("b has the maximum value");
            }
        }
        else {
            if(a>c){
                printf("a has the maximum value");
            }
        }
    }
    return 0;
}