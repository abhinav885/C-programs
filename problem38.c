#include<stdio.h>
int main(){
    //Sum of multiplication table of 26
    int n = 26,multiply,sum = 0;
    for(int i = 1;i<=50;i++){
        int multiply = n*i;
        sum  = sum + multiply;
    }
    printf("The value is: %d",sum);
}