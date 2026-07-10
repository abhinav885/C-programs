#include<stdio.h>
int main(){
    //Sum of n natural numbers and printing in reverse order
    int n,sum;
    sum = 0;
    printf("Enter the value of n :");
    scanf("%d",&n);
    for(int i=1,j=n;i<=n && j>=1;i++,j--){
        sum = sum+i;
        printf("%d\n",j);
    }
    printf("sum is %d\n",sum);
    return 0;
}