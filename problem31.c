#include<stdio.h>
int main(){
    //Program to print sum of n odd numbers
    int n,i=1,sum =0,count=0;
    printf("Enter the value of n:");
    scanf("%d",&n);   
    do{
        if(i%2!=0){
             sum+=i;
             count++;
        }
        i++;
    }while(count<n);
    printf("The sum is:%d",sum);
}