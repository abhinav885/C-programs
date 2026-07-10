#include<stdio.h>
int main(){
    //Divisibility by 7
    int num;
    printf("Enter the value of num is: ",num);
    scanf("%d",&num);
    if(num%7==0){
        printf("The number is exactly divisible");
    }
    else{
        printf("Not divisible");
    }
}