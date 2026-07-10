#include<stdio.h>
int main(){
    int n,i;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(int i=5;i<=n;i++){
            if(i%2==0){
                continue;
            }
            printf("%d\n",i);
         }
}