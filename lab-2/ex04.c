#include<stdio.h>

int main(){
    float prog, phy, calc, gpa;
    char mychar[20];
    int ID;



    printf("enter your name :");
    scanf("%s" ,mychar);

    printf("enter your student ID :");
    scanf("%d" ,&ID);

  

    printf("enter your programming score :");
    scanf("%f", &prog);
    
    printf("please enter your Physics score :");
    scanf("%f",&phy);
    

    printf("enter your calculus score :");
    scanf("%f" ,&calc);
    
    gpa = (prog + phy + calc) /3;

   printf("hi %s(%d)! your gpa is %.2f\n", mychar, ID, gpa);



return (0);
}