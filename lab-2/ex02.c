#include <stdio.h>
int main () {
int allmin, hour, min;

printf("enter total minutes :");
scanf("%d", &allmin);

hour = allmin / 60;
min = allmin % 60;

printf("%d minutes is %d hour(s) and %d min(s)\n", allmin, hour, min);

return (0);

}