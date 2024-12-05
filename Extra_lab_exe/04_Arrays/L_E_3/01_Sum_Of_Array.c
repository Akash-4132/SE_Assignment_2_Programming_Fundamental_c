/* Write a C program that takes N numbers from the user and stores them in an array. The
	program should then calculate and display the sum of all array elements.
	• Challenge: Modify the program to also find the average of the numbers.
  */
  
#include <stdio.h>

 main() {
    int N, sum = 0;
    float average;

    
    printf("Enter the number of elements: ");
    scanf("%d", &N);

    int arr[N];  

    
    printf("Enter %d numbers:\n", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];  // Add each element to sum
    }

    
    average = (float)sum / N;

   
    printf("Sum of the elements: %d\n", sum);
    printf("Average of the elements: %.2f\n", average);


}
