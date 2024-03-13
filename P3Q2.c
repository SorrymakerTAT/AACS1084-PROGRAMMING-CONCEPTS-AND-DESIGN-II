//#include<stdio.h>
//#include<stdlib.h>
//#include<ctype.h>
//#pragma warning(disable:4996)
//
//void main() {
//	int charCount = 0, letterCount = 0, blankCount = 0;
//	int vowelCount = 0, consonantCount = 0;
//	char ch;
//
//	FILE* fp;
//
//	fp = fopen("Q2.txt", "r");
//
//	if (fp == NULL) {
//		printf("File open error!!!\n");
//		exit(-1);
//	}
//
//	while (fscanf(fp, "%c", &ch) != EOF) {
//
//		charCount++;
//
//		if (ch == ' ')
//			blankCount++;
//		else {
//			if (isalpha(ch)) {
//				letterCount++;
//
//				ch = toupper(ch);
//
//				if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
//					vowelCount++;
//				else
//					consonantCount++;
//			}
//		}
//	}
//	printf("\nTotal number of characters : %d\n", charCount);
//
//	printf("Approx no. of words : %d\n\n", blankCount + 1);
//
//	fclose(fp);
//
//	system("pause");
//}