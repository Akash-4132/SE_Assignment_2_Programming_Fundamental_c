/* WAP to take 10 no. Input from user find out below values a. How many Even
  numbers are there b. How many odd numbers are there c. Sum of even
  numbers d. Sum of odd numbers?
  */
  
  #include <stdio.h>

int main() {
    int num, even_count = 0, odd_count = 0;
    int sum_even = 0, sum_odd = 0;


    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);

      
        if (num % 2 == 0) {
            even_count++;      // Increment even number count
            sum_even += num;   // Add to sum of even numbers
        } else {
            odd_count++;       // Increment odd number count
            sum_odd += num;    // Add to sum of odd numbers
        }
    }


    printf("\nResults:\n");
    printf("a. Total even numbers: %d\n", even_count);
    printf("b. Total odd numbers: %d\n", odd_count);
    printf("c. Sum of even numbers: %d\n", sum_even);
    printf("d. Sum of odd numbers: %d\n", sum_odd);

  
}
