#include<stdio.h>

int main(){
    float point;
    char mychar[20];
    int integer;
    
    printf("enter your integer value :");
    scanf("%d", &integer);
    printf("you entered %d\n", integer);


    printf("please enter a float value :");
    scanf("%f",&point);
    printf("you entered%.1f\n", point);

    printf("please enter a character :");
    scanf("%s" ,mychar);
    printf("you entered %s\n", mychar);



 
return (0);
}