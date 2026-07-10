#include<stdio.h>
int main(){
    //Area of Square
    int side;
    printf("Enter the side of square:");
    scanf("%d",&side);
    int Area = side*side;
    printf("Area of square is:%d\n",Area);
    //Area of Circle
    float radius;
    printf("Enter the radius of circle:");
    scanf("%f",&radius);
    printf("Area of circle is:%f",3.14*radius*radius);

}