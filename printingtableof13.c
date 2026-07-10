#include<stdio.h>
int main(){
    /*for(int i=13;i<=325;i=i+13){
        printf("%d\n",i);
    */
   int n;
   printf("Enter the value of n : ");
   scanf("%d",&n);
   printf("Multiplication table of %d:\n", n);
   for(int i=1;i<=20;i++){
     printf("%d * %d = %d\n",n,i,n*i);
   }
   return 0;
}

