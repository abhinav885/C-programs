#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int space = 2*(n-1);
    for(int i=1;i<=n;i++){
        //Numbers
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }

        //Spaces
        for(int j=1;j<=space;j++){
            printf(" ");
        }

        //Numbers
        for(int j=i;j>=1;j--){
            printf("%d",j);
        }

        printf("\n");
        space = space - 2;
        }
    return 0;
}