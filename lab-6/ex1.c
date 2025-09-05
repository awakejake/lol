#include <stdio.h>

// Define a struct for Student
struct Student {
    char name[100];
    int age;
    float score;
};

int main() {
    struct Student students[3]; // Array of 3 students

    // Input student data
    for (int i = 0; i < 3; i++) {
        printf("Enter Student %d's name: ", i + 1);
        scanf(" %[^\n]", students[i].name);  // Read full line including spaces

        printf("Enter Student %d's age: ", i + 1);
        scanf("%d", &students[i].age);

        printf("Enter Student %d's score: ", i + 1);
        scanf("%f", &students[i].score);
    }

    printf("\n--- Stored Student Information ---\n");

    // Print student data
    for (int i = 0; i < 3; i++) {
        printf("Student %d name is \"%s\", age %d, score %.1f\n",
               i + 1, students[i].name, students[i].age, students[i].score);
    }

    return 0;
}
