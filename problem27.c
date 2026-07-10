#include<stdio.h>
int main(){
    //Greatest of 4 numbers
    int a,b,c,d;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    printf("Enter the value of c:");
    scanf("%d",&c);
    printf("Enter the value of d:");
    scanf("%d",&d);
    /*if(a>b && a>c && a>d){
        printf("%d",a);
    }
    else if(b>a && b>c && b>d){
        printf("%d",b);
    }
    else if(c>a && c>b && c>d){
        printf("%d",c);
    }
    else{
        printf("%d",d);
    }*/
   //Ternary operator
   (a>b && a>c && a>d) ? printf("%d",a):(b>c && b>d) ? printf("%d",b):(c>d) ? printf("%d",c):printf("%d",d);
}