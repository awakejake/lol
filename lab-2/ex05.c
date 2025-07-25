#include<stdio.h>

int main(){
    float hight;
    char mychar[20], hs[50];
    int age;


    printf("enter your name:");
    scanf("%[^\n]" ,mychar);
  

    printf("enter your age :");
    scanf("%d", &age);
    
    printf("please enter your hight :");
    scanf("%f",&hight);
    

    printf("Enter your uni name:");
    scanf(" %[^\n]" ,hs);
    
    printf("hi everyone this is %s! from %s. I am %d years old and my hight is %.1f cm tall.", mychar, hs, age, hight);



return (0);
}