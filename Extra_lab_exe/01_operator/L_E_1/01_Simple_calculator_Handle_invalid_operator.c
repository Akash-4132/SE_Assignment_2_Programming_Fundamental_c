#include <stdio.h>

 int main() {
    double num1, num2, result;
    char operator;

  
    printf("Enter the first number: ");
    scanf("%lf", &num1);
    
    
    printf("Enter the second number: ");
    scanf("%lf", &num2);
    
    printf("Choice the operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);  
    

    // Perform the operation based on the operator
    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("The result of %.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("The result of %.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("The result of %.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '/':
            if(num2 != 0) {
                result = num1 / num2;
                printf("The result of %.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed!\n");
            }
            break;
        case '%':
            if((int)num2 != 0) {
                int intNum1 = (int)num1;
                int intNum2 = (int)num2;
                result = intNum1 % intNum2;
                printf("The result of %.0lf %% %.0lf = %.0lf\n", num1, num2, result);
            } else {
                printf("Error: Modulus by zero is not allowed!");
            }
            break;
        default:
            printf("Error: Invalid operator!");
    }
return 0;
   
}
