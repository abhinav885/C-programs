#include<stdio.h>
int main(){
    //Divisibility by 7
    int n;
    do{
        printf("Enter the number:");
        scanf("%d",&n);
        printf("%d\n",n);

        if(n%7==0){
            break;
        }
    }while(1);
    printf("Thank you");
    }
    