#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int initial = 0;
    for(int i=0;i<n;i++){
        //Stars
        for(int j=1;j<=n-i;j++){
            printf("*");
        }
        //Spaces
        for(int j=0;j<initial;j++){
            printf(" ");
        }
        
        //Stars
        for(int j=1;j<=n-i;j++){
            printf("*");
        }
        initial +=2;
        printf("\n");
        
    }
    initial  = 8;
    for(int i=1;i<=n;i++){
        //Stars
        for(int j=1;j<=i;j++){
            printf("*");
        }
        //Spaces
        for(int j=0;j<initial;j++){
            printf(" ");
        }
        
        //Stars
        for(int j=1;j<=i;j++){
            printf("*");
        }
        initial -=2;
        printf("\n");

    }
    return 0;
}