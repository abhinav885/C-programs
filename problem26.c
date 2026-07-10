#include<stdio.h>
int main(){
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if((num%97==0)){
         printf("The number is divisible");
    }
    else{
        printf("Not divisible");    
    }
}