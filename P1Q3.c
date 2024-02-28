#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

struct Time {
	int hour, minute;
};

void mian() {
	struct Time current, nextMin;

	printf("Enter time : \n");
	printf("\tHour : "); //13
	scanf("%d", &current.hour);
	printf("\tMinute : "); //62
	scanf("%d", &current.minute);

	while(current.hour < 0 || current.hour > 12 || current.minute < 0 || current.minute >= 60)
	{
		printf("Enter time : \n");
		printf("\tHour : "); 
		scanf("%d", &current.hour);//12
		printf("\tMinute : "); 
		scanf("%d", &current.minute);//59
	}

	nextMin.hour = current.hour;
	nextMin.minute = current.minute + 1;

	if (nextMin.minute >= 60)
	{
		nextMin.minute >= 60;
		nextMin.hour = current.hour + 1;
		if (nextMin.hour > 12)
			nextMin.hour -= 12;
	}

	printf("\nIt is now %02d:%02d.Next minute it will be %02d:%02d\n",current.hour, current.minute, nextMin.hour, nextMin.minute);

	system("pause");
}
