#include<stdio.h>
int main(){
    //Ternary operator
    //(condition) ? (expression1 evaluates if true) : (expression2 evaluates if expression1 is false);
    int num;
    printf("Enter the value of num:");
    scanf("%d",&num);
    (num>99 && num<1000) ? printf("you entered is a 3 digit number") : printf("Not a 3 digit number");
}