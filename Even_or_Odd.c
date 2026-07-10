#include<stdio.h>
int main(){
    //returns 1 if it is even
    //returns 0 if it is odd
    int x;
    printf("Enter the number: ");
    scanf("%d",&x);
    (x%2==0)? printf("The number is even",x): printf("The number is odd",x);
    //printf("The number is:%d\n",x%2==0);
}