#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    if(n%2==0){
        if(n%3==0){
            printf("The number is divisible by 2 and 3");
        }
        else{
            printf("The number is not divisible by 2 and 3");
        }
    }
    else{
        printf("The number is not divisible by 2 and 3");
    }
}