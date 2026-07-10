#include<stdio.h>
int main(){
    //Operator precedence
    int a=5,b=2,c=3,d=12,e=12;
    printf("%d\n",a+b/a-c+d*e);
    int f = 5.5;
    printf("%d\n",f);

    //Relational operators
    printf("%d\n",a==b);
    printf("%d\n",a<=b);
    printf("%d\n",e>=d);
    printf("%d\n",c!=d);

    //Logical operators
    //1.And operator
    printf("%d\n",(a>b)&&(c<d));//Returns 1 if both conditions are true
    printf("%d\n",(c>=b)&&(e==d));

    //2.Or operator
    printf("%d\n",(a>b)||(d==e));//Returns 1 if any one of the condition is true
    printf("%d\n",(a==c)||(b>=c));

    //3.Not operator
    printf("%d\n",!((a>=c) && (b<=d)));//Returns 1 if they are not equal
    printf("%d\n",!((a==d)||(b<=a)));

    //4.Assignment operators
    int y = 17;
    int x = 4;
    y+=x;//y = y+x
    y*=x;//y = y*x
    printf("%d\n",y);
    int z = 8;
    z/=x;//z=z/x
    printf("%d\n",z);
    printf("%d\n",y%=z);

}