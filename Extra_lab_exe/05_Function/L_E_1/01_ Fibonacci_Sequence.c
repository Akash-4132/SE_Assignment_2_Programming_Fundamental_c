#include <stdio.h>

// Recursive  function
int fib_recursive(int n) {
    if (n <= 1) return n;
    return fib_recursive(n - 1) + fib_recursive(n - 2);
}

// Iterative Fibonacci function
int fib_iterative(int n) {
    int a = 0, b = 1, temp;
    if (n <= 1) return n;
    for (int i = 2; i <= n; i++) {
        temp = a + b;
        a = b;
        b = temp;
    }
    return b;
}

 main() {
    int N;


    printf("Enter the number of terms for the Fibonacci sequence: ");
    scanf("%d", &N);

    // Display Fibonacci sequence up to N terms using recursion
    printf("\nFibonacci sequence up to %d terms (recursive):\n", N);
    for (int i = 0; i < N; i++) {
        printf("%d ", fib_recursive(i));
    }
    printf("\n");

    // Calculate and display the Nth Fibonacci number using both methods
    int result_recursive = fib_recursive(N);
    int result_iterative = fib_iterative(N);

    printf("\nNth Fibonacci number (recursive): %d\n", result_recursive);
    printf("Nth Fibonacci number (iterative): %d\n", result_iterative);


}
