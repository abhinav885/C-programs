#include<stdio.h>
int main(){
    int num;
    printf("Enter the value of num: ");
    scanf("%d",&num);
    if(num<0){
        num = num * -1;
    }
   printf("The absolute value of integer is: %d",num);
   return 0;
}