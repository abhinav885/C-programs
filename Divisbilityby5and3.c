#include<stdio.h>
int main(){
    //Divisibility by 5 and 3
    int num;
    printf("Enter the value of num:");
    scanf("%d",&num);
    //if((num%5==0) && (num%3==0)){
        //printf("Divisible by both 5 and 3");
    //}
    //else{
        //printf("Not divisible");
    //}

    //Divisibility by either 5 or 3
    if((num%5==0) || (num%3==0)){
        printf("Divisible by 5 or 3");
    }
    else{
        printf("not divisible");
    }

    return 0;
}