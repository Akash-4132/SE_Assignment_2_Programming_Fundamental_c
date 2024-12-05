#include <stdio.h>

 main() {
    int arr[10];
    int max, min, temp;

   
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize max and min to the first element
    max = arr[0];
    min = arr[0];

    // Find max and min 
    for (int i = 1; i < 10; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    
    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);

 // Sort the array using 
    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (arr[i] > arr[j]) {
                 // Swap arr[i] and arr[j]
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
             }
         }
   }

   
    printf("Sorted array in ascending order: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    
}
