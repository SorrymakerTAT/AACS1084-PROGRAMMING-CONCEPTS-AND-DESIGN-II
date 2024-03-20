#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#pragma warning(disable:4996)

void main()
{
	int letter[27] = { 0 };
	char fileName[25], ch;

	FILE* fp;

	printf("Enter file name > ");
	rewind(stdin);
	gets(fileName);

	fp = fopen(fileName, "r");

	if (!fp)
	{
		printf("File open error!");
		exit(-1);
	}

	while (fscanf(fp, "%c", &ch) != EOF)
	{
		ch = toupper(ch);

		if (ch == ' ')
			letter[26]++;
		else
			letter[ch - 'A']++;
	}
	printf("\nLetter:-\n");

	for (int i = 0; i < 26; i++)
	{
		printf("\t%c = %d\n", 'A' + i, letter[i]);
	}
	printf("\nNo of words = %d\n", letter[26] + 1);

	fclose(fp);

	system("pause");

}