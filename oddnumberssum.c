#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int i=1,sum=0,count=0;
    do{
        if(i%2!=0){
            sum = sum + i;
            count++;
        }
        i++;
    }while(count<n);
    printf("Sum of first %d odd numbers is: %d\n", n, sum);
}