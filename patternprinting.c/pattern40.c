#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(int i=3;i>=1;i--){
        for(int j=1;j<=n;j++){
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}