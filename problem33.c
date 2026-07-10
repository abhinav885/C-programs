#include<stdio.h>
int main(){
    //Sum of multiplication of a number
    int n,multiply,sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(int i=1;i<=30;i++){
        multiply = n*i;
        sum = sum + multiply;
    }
    printf("Total sum is:%d",sum);
}