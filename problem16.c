#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(int i=1;i<=30;i++){
        printf("%d\n",n*i);
    }
}