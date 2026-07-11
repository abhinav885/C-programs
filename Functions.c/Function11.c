#include<stdio.h>
int main(){
    int num1, num2, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    result = maximum(num1, num2);

    printf("Maximum number is %d\n", result);

    return 0;
}

// Function definition
int maximum(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}