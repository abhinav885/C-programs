#include<stdio.h>
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(char ch = 'A';ch<='A'+(n-i-1);ch++){
            printf("%c ",ch);
        }
        printf("\n");
    }
    return 0;
}