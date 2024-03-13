#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#pragma warning(disable:4996)
#define MAX_SIZE 20

struct Date {
	int day, month, year;
};

typedef struct {
	char empId[4], empName[20];
	struct Date dateJoined;
	char department[15];
}Employee;

Employee emp[MAX_SIZE] = {
	{"E01", "Alice Chin", 5, 12, 2008, "R & D"},
	{"E02", "John", 9, 12, 2011, "TT"},
	{"E03","Vivan", 3,3,2015,"HR"},
	{"E04","Alice Chin", 4,4,2011,"TT"},
	{"E05","Vivien Tan", 5,2,2015,"HR"}
};

int nEmployee = 5;
//step 1 - function prototype


// step 2 -declare prototype
void viewRecord() {
	int i, found;
	char searchId[4], cont;

	do {
		found = 0;
		printf("Enter ID to search > ");
		rewind(stdin);
		gets(searchId);

		for (i = 0; i < nEmployee; i++) {
			if (strcmp(searchId, emp[i].empId) == 0) {
				printf("%s %s %02d/%02d/%d %s\n\n", emp[i].empId, emp[i].empName, emp[i].dateJoined.day, emp[i].dateJoined.month, emp[i].dateJoined.year, emp[i].department);
				
				found = 1;
			}
		}
		
		if (!found) {
			printf("\nID %s ,record not found\n\n", searchId);
		}

		printf("\n Any more records to search (Y/N)");
		rewind(stdin);
		scanf("%c", &cont);
	} while (toupper(cont) == 'N');
}
void search() {
	int count, i, searchMth, searchYr;
	char cont;

	do {
		count = 0;
		printf("Enter month and year to search > ");
		scanf("%d %d , &searchMth, &searchYr");
		//display heading and sub-heading here

		for (i = 0; i < nEmployee; i++) {
			if (searchMth == emp[i].dateJoined.month && searchYr == emp[i].dateJoined.year) {
				printf("%s %s %02d/%02d/%d %s\n\n", emp[i].empId, emp[i].empName, emp[i].dateJoined.day, emp[i].dateJoined.month, emp[i].dateJoined.year, emp[i].department);

				count++;
			}
		}
		printf("\nAny more records to search (Y/N) ? ");
		rewind(stdin);
		scanf("%c", &cont);
	} while (toupper(cont) == 'N');
}

void displayALL() {
	int count = 0, i;

	//display heading and subheading here

	for (i = 0; i < nEmployee; i++) {
		//display correct answer here
		printf("%s %s %02d/%02d/%d %s\n\n", emp[i].empId, emp[i].empName, emp[i].dateJoined.day, emp[i].dateJoined.month, emp[i].dateJoined.year, emp[i].department);
		count++;
	}
	printf("\n%d record(s) listed.\n\n", count);
}


void main() {

}

