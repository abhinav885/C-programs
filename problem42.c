#include<stdio.h>
int main(){
    //Divisibility by 11
    int num;
    printf("Enter the value of num:");
    scanf("%d",&num);
    if(num%11==0){
        printf("The number is exactly divisible");
    }
    else{
        printf("Not divisible");
    }
}