#include<stdio.h>
int main(){
    int Age;
    printf("Enter your age:");
    scanf("%d",&Age);
    if(Age>=18){
        printf("You are eligible to take license test\n");
    }
    else{
        printf("Not eligible\n");
    }
    return 0;
}