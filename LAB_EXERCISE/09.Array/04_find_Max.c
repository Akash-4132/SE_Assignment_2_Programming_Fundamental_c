// Find the Maximum
#include <stdio.h>

 main() {
    int n, max;

   
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];  /

   
    printf("Enter %d integers: \n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Assume the first element is the maximum
    max = arr[0];

    // Loop through the array to find the maximum element
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];    // Update max if a larger element is found
        }
    }

    printf("The maximum element is: %d\n", max);

}
