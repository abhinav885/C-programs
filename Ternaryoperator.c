#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the values of b: ");
    scanf("%d",&b);
    printf("Enter the values of c: ");
    scanf("%d",&c);
    int greatest;
    greatest = (a>b && a>c)? printf("%d",a): (b>c)? printf("%d",b) : printf("%d",c);
}