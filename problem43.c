#include<stdio.h>
int main(){
    //program to check whether the number is zero,positive or negative
    int num;
    printf("Enter the value of num:");
    scanf("%d",&num);
    if(num>0){
        printf("The number is positive");
    }
    else if(num<0){
        printf("number is negative");
    }
    else{
        printf("zero");
    }
}