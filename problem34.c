#include<stdio.h>
int main(){
     /*int p,q;
    printf("Enter the values of p and q:");
    scanf(" %d %d",&p,&q);
    printf("p = %d q = %d",p,q);*/
    int i = 2,j = 3,k,l;
    float a,b;
    k = i/j*j;
    l = j/i*i;
    a = i/j*j;
    b = j/i*i;
    printf("%d %d %f %f",k,l,a,b);
}