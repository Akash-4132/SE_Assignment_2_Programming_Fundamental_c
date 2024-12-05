//WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746

#include <stdio.h>

int main() {
    int num, reversed = 0;


    printf("Enter a number: ");
    scanf("%d", &num);

    // Reverse the number using a while loop
    while (num != 0) {
        int digit = num % 10;  // Get the last digit
        reversed = reversed * 10 + digit;  // Build the reversed number
        num /= 10;  // Remove the last digit from the original number
    }

 
    printf("Reversed number: %d\n", reversed);

  
}

