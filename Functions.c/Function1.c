#include<stdio.h>
//Functions with arguments and with return value
int mul(int a, int b){
    return a*b;
}
int main(){
    int a,b,c;
    a = 7,b = 113;
    c = mul(a,b);
    printf("%d",c);
    return 0;
}