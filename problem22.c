#include<stdio.h>
int main(){
    //Factorial of a number
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);

    int fact = 1;
    for(int i=1;i<=n;i++){
        fact = fact * i;
    }
    printf("Factorial of a number is:%d",fact);
}