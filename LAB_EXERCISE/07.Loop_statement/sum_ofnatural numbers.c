// Calculate the Sum of Natural Numbers Using the While Loop

#include <stdio.h>

int main() {
    int n, sum = 0, i = 1;

    
    printf("Enter a number: ");
    scanf("%d", &n);

    // Using a while loop to calculate the sum of natural numbers from 1 to n
    while (i <= n) {
        sum += i;  // sum=sum+i; // Add i to sum
        i++;       // Increment i by 1
    }

    
    printf("The sum of natural numbers from 1 to %d is: %d\n", n, sum);

   
}
