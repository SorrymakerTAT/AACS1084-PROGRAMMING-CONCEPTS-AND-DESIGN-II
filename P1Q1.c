#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

struct Attendance {
	char studentName[40];
	char programmeCode[4];
	int yearOfStudy;
	int groupNo;
	int daysAbsent;
};

void main() {
	struct Attendance att;

	strcpy(att.studentName, "Tan Ah Kow");
	strcpy(att.programmeCode, "DIT");
	att.yearOfStudy = 1;
	att.groupNo = 7;
	att.daysAbsent = 3;

	printf("Enter student name : ");
	gets(att.studentName);
	printf("Enter programme Code : ");
	rewind(stdin);
	gets(att.programmeCode);
	printf("Enter year of study : ");
	scanf("%d", &att.yearOfStudy);
	printf("Enter group no : ");
	scanf("%d", &att.groupNo);
	printf("Enter days absent : ");
	scanf("%d", &att.daysAbsent);


	printf("Name			Programme			Group		Days		Absent\n");
	printf("==================================================================\n");
	printf("%s %s %d %d \n", att.studentName, att.programmeCode, att.groupNo, att.daysAbsent);


	if (att.daysAbsent < 1)
		printf("No Action\n");
	else if (att.daysAbsent <= 2)
		printf("Warning to students\n");
	else if (att.daysAbsent <= 4)
		printf("Inform parents\n");
	else
		printf("Bar from exam");




	system("pause");
	
}