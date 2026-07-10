#include<stdio.h>
int main(){
    //Divisibility by 7 and 5
    int n;
    printf("Enter the value of n:",n);
    scanf("%d",&n);
    //Using if-else statements
    /*if (n%7==0 && n%5==0){
        printf("Divisible");
    }
    else{
        printf("Not divisible");
    }*/

    //Using nested-if statements
    if(n%7==0){
        if(n%5==0){
            printf("Divisible by 7 and 5");
        }
    }
    else{
        printf("Not divisible");
    }
}