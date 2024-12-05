// sum of digits 
// revere number 

#include <stdio.h>

int main() {
    int num, sum = 0, reversed = 0, digit;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    int original_num = num; 
    // Calculate the sum of digits and reverse the digits using a while loop
    while (num != 0) {
        digit = num % 10;       // Extract the last digit
        sum = sum+ digit;           // Add the digit to the sum
        reversed = reversed * 10 + digit; // Append the digit to reversed number
        num /= 10;              // Remove the last digit
    }

   
    printf("Sum of digits: %d\n", sum);
 
    printf("Reversed number: %d\n", reversed);
54
}
