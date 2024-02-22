#include <stdio.h>
#include <string.h>

// Structure definition for storing book details
struct Book {
    char title[100];
    char author[100];
    float price;
};

int main() {
    // Declare an array of Book structure to store details of three books
    struct Book books[3];

    // Input details for three books
    for (int i = 0; i < 3; i++) {
        printf("Enter details for book %d:\n", i + 1);
        printf("Title: ");
        fgets(books[i].title, sizeof(books[i].title), stdin);
        strtok(books[i].title, "\n"); // Remove newline character if present
        printf("Author: ");
        fgets(books[i].author, sizeof(books[i].author), stdin);
        strtok(books[i].author, "\n"); // Remove newline character if present
        printf("Price: ");
        scanf("%f", &books[i].price);
        getchar(); // Consume newline character left in input buffer
    }

    // Find the most expensive book
    struct Book mostExpensive = books[0];
    for (int i = 1; i < 3; i++) {
        if (books[i].price > mostExpensive.price) {
            mostExpensive = books[i];
        }
    }

    // Find the lowest priced book
    struct Book lowestPriced = books[0];
    for (int i = 1; i < 3; i++) {
        if (books[i].price < lowestPriced.price) {
            lowestPriced = books[i];
        }
    }

    // Display information about the most expensive book
    printf("\nMost Expensive Book:\n");
    printf("Title: %s\n", mostExpensive.title);
    printf("Author: %s\n", mostExpensive.author);
    printf("Price: $%.2f\n", mostExpensive.price);

    // Display information about the lowest priced book
    printf("\nLowest Priced Book:\n");
    printf("Title: %s\n", lowestPriced.title);
    printf("Author: %s\n", lowestPriced.author);
    printf("Price: $%.2f\n", lowestPriced.price);

    return 0;
}
