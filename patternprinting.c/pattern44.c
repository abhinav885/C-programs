#include<stdio.h>
int main(){
    int num = 1;
    char ch;
    for(int i=1;i<=3;i++){
        for(int j=1;j<=3;j++){
            int d = num + 64;
            char ch = (char)d;
            printf("%c",ch);
            num++;

        }
        printf("\n");
    }
}