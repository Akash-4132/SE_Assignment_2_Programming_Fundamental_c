// "Printing numbers from 1 to 10, skipping 3 and stopping at 5"


#include <stdio.h>

int main() {
    
    printf("Printing numbers from 1 to 10, skipping 3 and stopping at 5:\n");

    for (int i = 1; i <= 10; i++) {
        // Skip the number 3
        if (i == 3) {
            continue;  // Skip the rest of the loop for i == 3
        }

        // Stop printing if the number reaches 5
        if (i == 5) {
            break;  // Exit the loop when i reaches 5
        }

     
        printf("%d ", i);
    }

    printf("\n");  

    return 0;
}
