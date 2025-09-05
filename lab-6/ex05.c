#include <stdio.h>


struct Time {
    int minute;
    int seconds;
};

int calculateTotalSeconds(struct Time t) {
    return (t.minute * 60) + t.seconds;
}

int main() {

    struct Time timeInputs[3];
    int totalSeconds = 0;


    for (int i = 0; i < 3; i++) {
        printf("Time input (m:s): ");
        scanf("%d:%d", &timeInputs[i].minute, &timeInputs[i].seconds);
     
        totalSeconds += calculateTotalSeconds(timeInputs[i]);
    }


    printf("Total time elapsed: %d second(s)\n", totalSeconds);

    return 0;
}