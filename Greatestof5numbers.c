#include<stdio.h>
int main(){
    int a,b,c,d,e;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);
    printf("Enter the value of c : ");
    scanf("%d",&c);
    printf("Enter the value of d : ");
    scanf("%d",&d);
    printf("Enter the value of e : ");
    scanf("%d",&e);
    if((a>b) && (a>c) && (a>d) && (a>e)){
        printf("the value of a is : %d",a);
    }
    else if((b>a) && (b>c) && (b>d) && (b>e)){
        printf("the value of b is : %d",b);
    }
    else if((c>a) && (c>b) && (c>d) && (c>e)){
        printf("the value of c is : %d",c);
    }
    else if((d>a) && (d>b) && (d>c) && (d>e)){
        printf("the value of d is : %d",d);
    }
    else if((e>a) && (e>b) && (e>c) && (e>d)){
        printf("the value of e is : %d",e);
    }
    return 0;

    
}