#include<stdio.h>
int main(){
    int num;
    printf("Enter the value of num: ");
    scanf("%d",&num);
    if(num%7==0){
        if(num%5==0){
            printf("Divisible by 7 and 5");
        }
        else{
            printf("Not divisible");
        }
    }
    else{
        printf("Thank you for executing");
    }
    return 0;
}