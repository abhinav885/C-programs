#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(int i=11;i<=7*n+4;i=i+7){
        printf("%d ",i);
    }
    return 0;
}