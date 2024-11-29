#include <stdio.h>
#include <string.h>

struct Book {
    char title[50];
    char author[50];
    float price;
    int pages;
};

int main() {
    struct Book book1;
    
    printf("\nEnter the Book title: ");
    gets(book1.title);
    printf("Enter the author: ");
    gets(book1.author);
    printf("Enter the Price: ");
    scanf("%f",&book1.price);
    printf("Enter the number of pages: ");
    scanf("%d",&book1.pages);

    printf("\n\n__________Book Details__________");
    printf("\nTitle: %s", book1.title);
    printf("\nAuthor: %s", book1.author);
    printf("\nPrice: %f", book1.price);
    printf("\nPages: %d", book1.pages);
    return 0;
}