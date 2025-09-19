#include <stdio.h>
#include <math.h>


double calculateCircumference(double radius) {
    return 2 * M_PI * radius;
}


double calculateArea(double radius) {
    return M_PI * radius * radius;
}

int main() {
    double radius;


    printf("Enter the radius in cm: ");
    scanf("%lf", &radius);

    double circumference = calculateCircumference(radius);
    double area = calculateArea(radius);


    printf("Circumference: %.2f\n", circumference);
    printf("Area: %.2f\n", area);

    return 0;
}