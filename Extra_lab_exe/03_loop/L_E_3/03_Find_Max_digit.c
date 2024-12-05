// find out the max from given number #include <stdio.h>

 main() {
    int num, maxDigit = -1, digit;
  
    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle negative numbers 
    if (num < 0) {
        num = -num;  // Make the number positive by negating it
    }
    // Find the maximum digit 
    while (num > 0) {
        digit = num % 10;  
        if (digit > maxDigit) {
            maxDigit = digit;  // Update the max digit if the current digit is larger
        }
        num /= 10;  
    } 
    printf("Max digit is: %d\n", maxDigit);
}
