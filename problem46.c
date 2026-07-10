#include<stdio.h>
int main(){
    //nth term of a GP
    int a,r,n;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of r:");
    scanf("%d",&r);
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d ",a);
        a = a * 2;
    }

}