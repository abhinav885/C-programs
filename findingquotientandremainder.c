#include<stdio.h>

int main() {
    int dividend, divisor;

    // Input
    printf("Enter the dividend: ");
    scanf("%d", &dividend);

    printf("Enter the divisor: ");
    scanf("%d", &divisor);

    // Check for division by zero
    if(divisor == 0) {
        printf("Division by zero not allowed\n");
        return 1;
    }

    int quotient = 0;

    // Repeated subtraction to find quotient
    while(dividend >= divisor) {
        dividend = dividend - divisor;
        quotient++;
    }

    int remainder = dividend;

    printf("The quotient is: %d\n", quotient);
    printf("The remainder is: %d\n", remainder);

    return 0;
}

