/*Write a C program that stores 5 integers in a one-dimensional array and prints them.
	 Extend this to handle a two-dimensional array (3x3 matrix) and
	calculate the sum of all elements.
	 */
#include<stdio.h>
int main() {
    int arr[5], matrix[3][3], i, j, sum = 0;

    
    printf("Enter 5 integers: ");
    for (i = 0; i < 5; i++) scanf("%d", &arr[i]);
    printf("The 5 integers are: ");
    for (i = 0; i < 5; i++) printf("%d ", arr[i]);

    // Input 3x3 matrix
    printf("\nEnter 9 integers for 3x3 matrix: ");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++) scanf("%d", &matrix[i][j]);

    // Print 3x3 matrix
    printf("\n3x3 matrix is:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) printf("%d ", matrix[i][j]);
        printf("\n");
    }

    // Calculate sum of matrix elements
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++) sum += matrix[i][j];

    printf("\nSum of matrix elements: %d\n", sum);
    return 0;
}
