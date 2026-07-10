#include<stdio.h>
int main(){
    //Declaration of variables
    int a,b;

    //Input values
    printf("Enter the value of a: ");
    scanf("%d",&a);

    printf("Enter the value of b: ");
    scanf("%d",&b);

    //Logical condition
    if(a>b){
        printf("a is maximum");
    }

    else{
        printf("b is maximum");
    }

    return 0;

}