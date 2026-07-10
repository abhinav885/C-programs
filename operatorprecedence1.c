#include<stdio.h>
int main(){
    //operator precedence
    int a = 7, b = 5, c = 4, d = 8, e = 10, f = 12;
    printf("%d\n",a+b/c-d+e*f);

    //Relational operators
    printf("%d\n",a==d);
    printf("%d\n",c>=a);
    printf("%d\n",c<=f);
    printf("%d\n",c!=e);

    //Logical operators
    //And operator
    printf("%d\n",(a>=b) && (c<f));
    printf("%d\n",(a==d) && (c==b));
  
    //Or operator
    printf("%d\n",(e>=d) || (a==c));
    printf("%d\n",(d<=b) || (e>f));

    //Not operator
    printf("%d\n",!((a>=c) && (b>d)));

    //Assignment operators
    int x  = 21;
    int y  = 34;
    y+= x;//y = y + x;
    x*= y;//x = x*y;
    printf("%d\n",y);
    printf("%d\n",x);
    int z = 46;
    x/= z;//x = x/z;
    printf("%d\n",x);


}