#include<stdio.h>

int main(){
    float hight;
    char mychar[20], gender[20], hs[50];
    int age;
    int weight;


    printf("enter your name:");
    scanf("%[^\n]" ,mychar);
  

    printf("enter your age :");
    scanf("%d", &age);
    
    printf("please enter your hight :");
    scanf("%f",&hight);
    

    printf("enter your weight :");
    scanf("%d", &weight);
    

    printf("enter your gender:");
    scanf(" %[^\n]" ,gender);
    

     printf("Enter your Education Qualification:");
    scanf(" %[^\n]" ,hs);
    

    printf("you entered %s\n", mychar);
    printf("you entered %d\n", age);
    printf("you entered %.1f\n", hight);
    printf("you entered %d\n", weight);
    printf("you entered %s\n", gender);
    printf("you entered %s\n", hs);



return (0);
}