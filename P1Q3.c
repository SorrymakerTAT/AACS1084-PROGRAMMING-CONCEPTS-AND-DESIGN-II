#include<stdio.h>
#include<stdlib.h>
#pragma warning (disable:4996)

struct Time {
	int hour;
	int minute;

};


void main() {
	struct Time current;
	struct Time nextMin;

	printf("Input current hour :");
	scanf("%d", &current.hour);
	rewind(stdin);
	printf("Input current minute :");
	scanf("%d", &current.minute);
	rewind(stdin);

	nextMin.minute = 0;
	nextMin.hour = 0;

	nextMin.minute = current.minute + 1;
	nextMin.hour = current.hour; 

	if (nextMin.minute >= 60) {
		nextMin.hour += 1;
		nextMin.minute -= 60;
	}

	if (nextMin.hour >= 13 && nextMin.hour <= 23) {
		nextMin.hour -= 12;
	}

	printf("\nIt is now %d:%02d. Next minute it will be %d:%02d",current.hour,current.minute,nextMin.hour,nextMin.minute);
}
