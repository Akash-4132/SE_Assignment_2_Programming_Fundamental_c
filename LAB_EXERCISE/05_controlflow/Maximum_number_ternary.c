// Q. WAP to find maximum number among 3 numbers using ternary operator

#include <stdio.h>

int main() {
    int num1, num2, num3, max;


    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Find the maximum number using the ternary operator
    max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    // Output the maximum number
    printf("The maximum number is: %d\n", max);


}
