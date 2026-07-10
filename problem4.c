#include<stdio.h>
int main(){
    //Simple interest
    float p,r,t,si;
    printf("Enter the principal amount:");
    scanf("%f",&p);
    printf("Enter the rate of interest:");
    scanf("%f",&r);
    printf("Enter the time of years:");
    scanf("%f",&t);
    si  =(p*r*t)/100;
    printf("%f",si);
}