//Minimum of 4 numbers using nested if statements
#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    printf("Enter the value of c:");
    scanf("%d",&c);
    printf("Enter the value of d:");
    scanf("%d",&d);
    if(a<b){
        if(a<c){
            if(a<d){
                printf("%d",a);
            }
            else{
                printf("%d",d);
            }
        }
        else{
            printf("%d",c);
        }
    }
    else{
        printf("%d",b);
    }
}