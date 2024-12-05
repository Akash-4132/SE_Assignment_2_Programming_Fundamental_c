// challange : Modify the program to print all prime numbers between 1 and a given number

#include <stdio.h>

int main() {
    int num, i, j, isPrime;

   
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Prime numbers between 1 and %d are:\n", num);

    for (i = 2; i <= num; i++) { 
        isPrime = 1;  // Assume i is prime initially
        for (j = 2; j <= i / 2; j++) {  
            if (i % j == 0) {
                isPrime = 0;  
                break; 
            }
        }
        if (isPrime) {
            printf("%d ", i);  
        }
    }
  
}
