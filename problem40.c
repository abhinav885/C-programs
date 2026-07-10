#include<stdio.h>
int main(){
    //Display the ap 4,7,10,...496 terms
    int n,a,d;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of d:");
    scanf("%d",&d);
    /*for(int i=1;i<=2*n-1;i++){
        Ap = a+(n-1)*d;
    }
    printf("The term is = %d",Ap);
    }*/
   for(int i=1;i<=3*n+1;i++){
        printf("%d ",a);
        a = a + 3;
   }
}