#include<stdio.h>
int main(){
    //Minimum of 3 numbers
    int a,b,c;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    printf("Enter the value of c:");
    scanf("%d",&c);
    //Using if-else if statements
    /*if((a<b)&& (a<c)){
        printf("%d",a);
        }
    else if((b<a) && (b<c)){
        printf("%d",b);
    }
    else{
        printf("%d",c);
    }*/
    //Using nested-if statements
    if(a<b){
        if(a<c){
            printf("%d",a);
        }
        else{
            printf("%d",c);
        }
    }
    else{
            printf("%d",b);
        }
}