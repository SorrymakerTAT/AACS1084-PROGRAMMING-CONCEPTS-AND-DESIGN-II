#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

typedef struct {
	char performer[30];
	char songName[30];
	int year;
	int playingTime;
}Songs;

void main() {
	Songs songList[10] = {
		{"Ed Shereen","Prefect Place", 2019, 253},
		{"Taylor Swift","Love Story", 2008, 260},
		{"Taylor Swift","September", 2018, 225},
		{"Bruno Mars","24k Magic", 2016, 249},
		{"Taylor Swift","You belong with me", 2008, 235},
		{"Bruno Mars","Just the way you are", 2010, 190},
		{"Ed Sheeran","Lego home", 2011, 193},
		{"Bruno Mars","It will rain",2011,195},
		{"Jay Chou","Maple leaf",2005,286},
		{"Bruno Mars","It will rain",2011,195},
	};

	int totalPlayingTime = 0;
	int count = 0;
	char searchName[20];
	int minTime, maxTime;

	printf("\t\t\tMY COLLECTION OF SONGS\n");
	printf("\t\t\t----------------------\n");
	printf("%-20s %-30s %s \t %s\n", "Performer", "Song","Year", "Playing Time");

	printf("============================================================================\n");

	for (int i = 0; i < 10; i++)
	{
		printf("%-20s %-30s %d \t %d\n", songList[i].performer, songList[i].songName, songList[i].year, songList[i].playingTime);

		totalPlayingTime += songList[i].playingTime;
	}
	printf("==============================================================================\n");
	printf("Total playing time = %d seconds (= %d min %d sec)\n\n", totalPlayingTime, totalPlayingTime / 60, totalPlayingTime % 60);

	//c 
	printf("\t\t\tList of songs - 2015 and earlier\n");
	printf("\t\t\t--------------------------------\n");
	printf("%-20s %-30s %s \t %s \n", "Performer", "Song", "Year", "Playing Time");
	printf("===============================================================================\n");

	for (int i = 0; i < 10; i++) {
		if (songList[i].year <= 2015) {
			printf("%-20s %-30s %d \t %d\n", songList[i].performer, songList[i].songName, songList[i].year, songList[i].playingTime);
			count++;
		}
	}
	printf("===============================================================================\n");
	printf("\t%d records listed\n\n\n", count);

	//d
	count = 0;

	printf("\t\t\tList of songs - 2015 and earlier\n");
	printf("\t\t\t--------------------------------\n");
	printf("%-20s %-30s %s \t %s \n", "Performer", "Song", "Year", "Playing Time");
	printf("===============================================================================\n");

	printf("Performer Name To Search > ");
	rewind(stdin);
	gets(searchName);



	for (int i = 0; i < 10; i++) {
		if (strcmp(searchName,songList[i].performer)==0) {
			printf("%-20s %-30s %d \t %d\n", songList[i].performer, songList[i].songName, songList[i].year, songList[i].playingTime);
			count++;
		}
	}
	printf("===============================================================================\n\n");
	printf("%d records found for Performer's Name = %s\n",count , searchName);


	//e
	printf("Searching based on 2 criteria: \n");
	printf("1. Performer's Name > ");
	rewind(stdin);
	gets(searchName);
	printf("2.Playing Time Range - From > ");
	scanf("%d", &minTime);
	printf("                     - To > ");
	scanf("%d", &maxTime);


	for (int i = 0; i < 10; i++) 
	{
		if (strcmp(searchName, songList[i].performer) == 0 && songList[i].playingTime >= minTime && songList[i].playingTime <= maxTime)
			{
			printf("%-20s %-30s %d \t %d\n", songList[i].performer, songList[i].songName, songList[i].year, songList[i].playingTime);

			count++;
			}
	}

	system("pause");
}
