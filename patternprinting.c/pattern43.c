#include<stdio.h>
int main(){
    for(int i=1;i<=2;i++){
        int num = 1;
        for(int j=1;j<=3;j++){
            printf("%d",num);
            num++;
        }
        printf("\n");
    }
}