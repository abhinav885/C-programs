#include<stdio.h>
int main(){
    //Simple calculator
    float a,b;
    char operators;
    printf("Enter the operation you want to perform:(+,-,/,*,%) \n");
    scanf("%c",&operators);
    printf("Enter the value of a:\n");
    scanf("%f",&a);
    printf("Enter the value of b:\n");
    scanf("%f",&b);
    switch(operators){
            case '+':
                printf("The value is:%d",a+b);
                break;
            case '-':
                printf("The value is:%d",a-b);
                break;
            case '/':
                printf("The value is:%f",a/b);
                break;
            case '*':
                printf("The value is:%d",a*b);
                break;
            case '%':
                printf("The value is:%d",(int)a%(int)b);
                break;
            default:
                printf("No other operation can be performed");
    }
}