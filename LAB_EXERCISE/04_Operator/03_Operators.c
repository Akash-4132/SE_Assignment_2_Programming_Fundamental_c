 //Q.3 Write a C program that accepts two integers from the user and performs
//    arithmetic, relational, and logical operations on them. Display the results.

#include <stdio.h>  

int main() {
    
    int num1, num2;

  
    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Arithmetic Operations
    int sum = num1 + num2;
    int diff = num1 - num2;
    int product = num1 * num2;
    int remainder = num1 % num2;

    // Relational Operations
    int equal = (num1 == num2);
    int not_equal = (num1 != num2);
    int greater = (num1 > num2);
    int less = (num1 < num2);
    int greater_equal = (num1 >= num2);
    int less_equal = (num1 <= num2);

    // Logical Operations (assuming we are working with non-zero values for logical true)
    int logical_and = (num1 > 0 && num2 > 0);  // True if both numbers are positive
    int logical_or = (num1 > 0 || num2 > 0);   // True if at least one number is positive
    int logical_not_num1 = !(num1 > 0);        // True if num1 is not greater than 0 (i.e., non-positive)

    // Display the results of Arithmetic Operations
    printf("\nArithmetic Operations:\n");
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", diff);
    printf("Product: %d\n", product);
    printf("Remainder: %d\n", remainder);

    // Display the results of Relational Operations
    printf("\nRelational Operations:\n");
    printf("num1 == num2: %d\n", equal);  // 1 if true, 0 if false
    printf("num1 != num2: %d\n", not_equal);
    printf("num1 > num2: %d\n", greater);
    printf("num1 < num2: %d\n", less);
    printf("num1 >= num2: %d\n", greater_equal);
    printf("num1 <= num2: %d\n", less_equal);

    // Display the results of Logical Operations
    printf("\nLogical Operations:\n");
    printf("num1 > 0 AND num2 > 0: %d\n", logical_and);  // Logical AND
    printf("num1 > 0 OR num2 > 0: %d\n", logical_or);    // Logical OR
    printf("NOT (num1 > 0): %d\n", logical_not_num1);    // Logical NOT


}
