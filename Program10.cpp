/* Program 09 */
/* write a c Program that performs as calculator using switch case */

#include <stdio.h>
    
int main(){
    int r, l, b, h, op;
    int area;

    printf("\nSelect 1 for Area of Circle");
    printf("\nSelect 2 for area of Rectangle");
    printf("\nSelect 3 for area of Triangle");
    printf("\nSelect 4 for Area of Square");
    printf("\nSelect 5 to Exit");

    printf("\nEnter your Choice: ");
    scanf("%d", &op);

    switch(op) {
        case 1:
        printf("Enter the radius: ");
        scanf("%d", &r);
        area = 3.14*r*r;
        printf("Area of circle is: %d", area);
        break;

        case 2:
        printf("Enter the length and breath: ");
        scanf("%d %d", &l, &b);
        area = l*b;
        printf("Area of rectangle is: %d", area);
        break;

        case 3:
        printf("Enter the base and height: ");
        scanf("%d %d", &b, &h);
        area = 0.5*b*h;
        printf("Area of triangle is: %d", area);
        break;

        case 4:
        printf("Enter the length: ");
        scanf("%d", &l);
        area = l*l;
        printf("Area of triangle is: %d", area);
        break;

        default:
        printf("Calculator!");
        break;
    } while(op==5)
    return 0;
}