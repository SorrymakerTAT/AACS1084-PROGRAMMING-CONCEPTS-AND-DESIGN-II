//#include<stdio.h>
//#include<stdlib.h>
//#include<ctype.h>
//#pragma warning(disable:4996)
//
//void main() {
//	int sum = 0;
//	int num;
//	double average;
//
//	FILE* fPtr;
//
//	fPtr = fopen("numbers.txt", "r");
//
//	if (fPtr == NULL) {
//		printf("File open error\n");
//		exit(-1);
//	}
//
//	//for (int i = 1; i <= 6; i++) {
//	//	fscanf(fPtr, "%d", &num);
//
//	//	sum += num;
//	//}
//
//	while (fscanf(fPtr, "%d", &num)!= EOF) {
//		sum += num;
//	}
//	average = sum / 6.0;
//
//	printf("\Sum = %d\n", sum);
//	printf("Average = %.2f\n", average);
//
//	fclose(fPtr);
//
//	system("pause");
//}