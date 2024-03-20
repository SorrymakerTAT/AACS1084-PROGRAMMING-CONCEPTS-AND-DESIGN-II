//#include<stdio.h>
//#include<stdlib.h>
//#include<ctype.h>
//#include<string.h>
//#pragma warning(disable:4996)
//
//typedef struct {
//	char name[25], gender, type, countryCode[4];
//	int ranking;
//}Player;
//
//void addReocrd();
//
//void addRecord() {
//	Player p;
//
//	FILE* fp;
//
//	fp = fopen("badmintonPalayers.txt", "w");
//
//	if (!fp) {
//		printf("File open error!!\n");
//		exit(-1);
//	}
//
//	for (int i = 1; i <= 5; i++) {
//		printf("\nEnter Palyer's Name > ");
//		rewind(stdin);
//		gets(p.name);
//		printf("Enter Player's Gender > ");
//		rewind(stdin);
//		scanf("%c", &p.gender);
//		printf("\nEnter Player's Type > ");
//		rewind(stdin);
//		scanf("%c", &p.type);
//		printf("\nEnter Players's Country Code > ");
//		rewind(stdin);
//		gets(p.countryCode);
//		printf("Enter Player's Ranking > ");
//		scanf("%d", &p.ranking);
//
//		fprintf(fp, "%s|%c|%c|%s|%d\n", p.name, p.gender, p.type, p.countryCode, p.ranking);
//	}
//	fclose(fp);
//}
//
//void main() {
//	addRecord();
//
//	system("pause");
//}