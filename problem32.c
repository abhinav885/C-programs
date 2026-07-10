#include<stdio.h>
int main(){
    //Sum of first n even numbers
    int n,i=2,sum=0,count=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    do{
        if(i%2==0){
            sum+= i;
            count++;
        }
        i=i+2;
    }while(count<n);
    printf("The sum is:%d",sum);
}