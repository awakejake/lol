#include <stdio.h>
#include <string.h>


int countVowels(char *str) {
    int count = 0;


    for (int i = 0; str[i] != '\0'; i++) {

        char ch = str[i];
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32; 
        }


        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }
    return count;
}

int main() {
    char inputString[100];


    printf("Input: ");

    fgets(inputString, sizeof(inputString), stdin);


    inputString[strcspn(inputString, "\n")] = '\0';

    int vowelCount = countVowels(inputString);
    printf("Output: Number of vowels: %d\n", vowelCount);

    return 0;
}