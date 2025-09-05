#include <stdio.h>

struct Student {
    char name[100];
    int age;
    float score;
};

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter Student %d's name: ", i + 1);
        scanf(" %[^\n]", students[i].name);  // read full name with spaces

        printf("Enter Student %d's age: ", i + 1);
        scanf("%d", &students[i].age);

        printf("Enter Student %d's score: ", i + 1);
        scanf("%f", &students[i].score);
    }

    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].score > students[maxIndex].score) {
            maxIndex = i;
        }
    }

    printf("\n--- Results ---\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d's name: %s\n", i + 1, students[i].name);
        printf("Student %d's age: %d\n", i + 1, students[i].age);
        printf("Student %d's score: %.1f\n\n", i + 1, students[i].score);
    }

    printf("The highest score belongs to %s at %.1f scores!\n",
           students[maxIndex].name, students[maxIndex].score);

    return 0;
}
