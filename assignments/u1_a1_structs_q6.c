#include <stdio.h>

typedef struct {
    char title[256];
    char author_name[256];
    int price;
} LibraryBook;

void main() {
    int no_of_books = 5;
    LibraryBook books[no_of_books];
    int gt_threshold_idx[5] = { 0 };
    int gt_threshold = 500;
    int gt_count = 0;

    printf("Enter the title, author name, and price of 5 books: \n");

    for (int i = 0; i < no_of_books; i++) {
        int price = NULL;
        printf("Book Title: ");
        scanf(" %255[^\n]", books[i].title);

        printf("Author Name: ");
        scanf(" %255[^\n]", books[i].author_name);

        while (1) {
            printf("Price: ");
            scanf("%d", &price);

            if (price <= 0) {
                continue;
            }

            books[i].price = price;
            break;
        }

        printf("\n");

        if (books[i].price > gt_threshold)
            gt_threshold_idx[i] = 1;
    }


    for (int i = 0; i < no_of_books; i++) {
        if (gt_threshold_idx[i] == 1)
            gt_count++;
    }
    printf("%d books cost more than 500.\n", gt_count);
}