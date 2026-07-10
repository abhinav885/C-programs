#include<stdio.h>
int main(){
    int num;
    printf("Enter the value of num: ");
    scanf("%d",&num);
    if(num>999 && num<10000){
        printf("It is a 4 digit number");
    }
    else{
        printf("Not a 4 digit number");
    }
    return 0;
}