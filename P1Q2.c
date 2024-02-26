#include<stdlib.h>
#include<stdio.h>
#pragma warning (disable:4996)

typedef struct {
	char bookId[8];
	char authorName[100];
	char bookTitle[500];
	char bookPublisher[100];
	int bookPublishYear;
	int bookQuantity;
}BookInventory;

struct Transactions {
	char transactionCode;
	int quantity;
};

int finalQuantity;
char transactionType[10];

void main() {
	BookInventory book = { "BK-2044","JK Rowling","Harry Potter and the Prisoner of Azkaban","Bloomsbury",1999,25 };
	printf("Book Details:\n");
	printf("=============\n");
	printf("Book ID                      : %s\n", book.bookId);
	printf("Author Name                  : %s\n", book.authorName);
	printf("Book Title                   : %s\n", book.bookTitle);
	printf("Publisher                    : %s\n", book.bookPublisher);
	printf("Year of Publication          : %d\n", book.bookPublishYear);
	printf("Quantity in Stock            : %d\n", book.bookQuantity);

	struct Transactions txn;
	txn.transactionCode = 'A';
	txn.transactionCode = 'S';
	txn.quantity = 2;

	while (txn.transactionCode != 'X') {
	
	printf("\nTransaction Code (S=sold, P=purchased, X=exit)      :");
	scanf("%c", &txn.transactionCode);
	rewind(stdin);

	while (txn.transactionCode != 'P' && txn.transactionCode != 'S' && txn.transactionCode != 'X') {
		printf("Invalid transaction code!");
		printf("\nTransaction Code (S=sold, P=purchased, X=exit)      :");
		scanf("%c", &txn.transactionCode);
		rewind(stdin);
	}

	if (txn.transactionCode == 'X') {
		printf("Exited - End of Transactions.");
		return 0;
	}

	printf("Transaction Quantity                                :");
	scanf("%d", &txn.quantity);
	rewind(stdin);

	if (txn.transactionCode == 'S') {
		finalQuantity = book.bookQuantity - txn.quantity;
		book.bookQuantity = finalQuantity;
		strcpy(transactionType, "Sold");
	}
	else if (txn.transactionCode == 'P') {
		finalQuantity = book.bookQuantity + txn.quantity;
		book.bookQuantity = finalQuantity;
		strcpy(transactionType, "Purchased");
	}

	if (txn.transactionCode == 'P' || txn.transactionCode == 'S') {
		printf("\n%s : %d copies of \"%s\" by %s\n", transactionType, txn.quantity, book.bookTitle, book.authorName);
		printf("There are now %d copies in stock\n", finalQuantity);
	}

	
	}