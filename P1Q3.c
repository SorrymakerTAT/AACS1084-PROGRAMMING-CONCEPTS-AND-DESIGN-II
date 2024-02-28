#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

struct Time {
	int hour;
	int minute;
};

void main()
{

	struct Time current, nextMin;
	current.hour;
	current.minute;
	nextMin.hour;
	nextMin.minute;

	printf("Please Enter Your Current Time in hours and minuted :");
	scanf("%d:%02d", &current.hour, &current.minute);
	rewind(stdin);

	nextMin.minute = current.minute + 1;
	if (nextMin.minute >= 60)
	{
		nextMin.hour = current.hour + 1;
		if (nextMin.hour > 12) {
			nextMin.hour = 1;
		}
		else
		{
			nextMin.hour = nextMin.hour;
		}
		nextMin.minute = 00;
	}
	else
	{
		nextMin.hour = current.hour;
	}

	printf("It is now %02d:%02d, Next minute it will be %d:%02d\n", current.hour, current.minute, nextMin.hour, nextMin.minute);
	system("pause");
}
