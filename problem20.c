#include<stdio.h>
#include<math.h>
int main(){
    //Compound interest
    int principal,time;
    float rate,Amount;
    printf("Enter the principal amount:");
    scanf("%d",&principal);
    printf("Enter the rate of interest:");
    scanf("%f",&rate);
    printf("Enter the time:");
    scanf("%d",&time);
    Amount = principal*pow((1+rate/100),time);
    printf("Total amount is:%.3f\n",Amount);
    float  CI = Amount - principal;
    printf("Compound interest is:%.3f",CI);
}