// Accept Number of Array and store in the Array
#include <stdio.h>

 main() {
    int n;

    // Input: Ask user how many numbers they want to enter
    printf("Enter the number of elements you want to store: ");
    scanf("%d", &n);

    int arr[n]; 
    // Input: Accept numbers from the user and store in the array
    printf("Enter %d integers: \n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Output: Print the stored numbers
    printf("The numbers you entered are: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    
}
