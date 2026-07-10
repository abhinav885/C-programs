#include<stdio.h>
int main(){
    int number;
    printf("Enter the table you want to print:");
    scanf("%d",&number);
    for(int i=10;i>=1;i--){
        printf("%d\n",number*i);
    }   
}