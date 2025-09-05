#include <stdio.h>

struct Point {
    float x;
    float y;
};

float square(float num) {
    return num * num;
}

float square_root(float num) {
    if (num < 0) {
        return 0; 
    }
    if (num == 0) {
        return 0;
    }

    float low = 0;
    float high = num;
    float mid = 0;
    

    for (int i = 0; i < 100; i++) {
        mid = (low + high) / 2;
        if (mid * mid == num) {
            return mid;
        } else if (mid * mid < num) {
            low = mid;
        } else {
            high = mid;
        }
    }
    return mid;
}

int main() {

    struct Point p1, p2;
    float distance;

    printf("x1: ");
    scanf("%f", &p1.x);
    printf("y1: ");
    scanf("%f", &p1.y);


    printf("x2: ");
    scanf("%f", &p2.x);
    printf("y2: ");
    scanf("%f", &p2.y);


    distance = square_root(square(p2.x - p1.x) + square(p2.y - p1.y));

    printf("Distance between (%.1f, %.1f) and (%.1f, %.1f) is %.3f unit(s)\n",
           p1.x, p1.y, p2.x, p2.y, distance);

    return 0;
}