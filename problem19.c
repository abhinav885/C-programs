#include<stdio.h>
int main(){
    int a,b,minimum;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);

    minimum = (a<b) ? (a) : (b);
    printf("Miniumum of two numbers is:%d\n",minimum);
}