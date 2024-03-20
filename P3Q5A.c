#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#pragma warning(disable:4996)

int main() {
    char fileName[100];
   FILE* textFile;
   int countWords = 0;
   int countLetters[27] = { 0 };
    char words[100];
    char letter;

    printf("Enter File Name: ");
    scanf("%s", fileName);
    textFile = fopen(fileName, "r");
    if (textFile == NULL) {
        printf("Unable to read %s\n", fileName);
        return -1;
    }

    // Count words
    while (fscanf(textFile, "%s", words) == 1) {
        countWords++;
    }

    // Rewind to start of the file to count letters
    rewind(textFile);

    // Count letters
    while (fscanf(textFile, "%c", &letter) == 1) {
        if (isalpha(letter)) {
            if (isupper(letter)) {
                countLetters[letter - 'A']++;
            }
            else {
                countLetters[letter - 'a']++;
            }
        }
        else {
            countLetters[26]++;
        }
    }

    fclose(textFile);

    printf("  Letter : -\n");
    for (int i = 0; i < 26; i++) {
        printf("           %c = %d\n", 'A' + i, countLetters[i]);
    }
    printf("  No. Of Words  : %d\n", countWords);

    return 0;
}
