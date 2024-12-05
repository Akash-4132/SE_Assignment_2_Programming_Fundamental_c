#include <stdio.h>

// Function to check if a number is a palindrome
int is_palindrome(int num) {
    int original = num; 
    int reversed = 0, remainder;


    while (num != 0) {
        remainder = num % 10;  
        reversed = reversed * 10 + remainder; 
        num /= 10;  
    }

 
    return original == reversed;
}

 main() {
    int num;

  
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is a palindrome using the function
    if (is_palindrome(num)) {
        printf("%d is a palindrome.\n", num);
    } else {
        printf("%d is not a palindrome.\n", num);
    }

   
}
