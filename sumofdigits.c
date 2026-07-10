#include<stdio.h>
int main(){
    int num,sum = 0,lastdigit;
    printf("Enter the value of num: ");
    scanf("%d",&num);
    while(num>0){
        lastdigit = num%10;
        sum = sum + lastdigit;
        num = num/10;
    }
    printf("%d",sum);
    return 0;

}