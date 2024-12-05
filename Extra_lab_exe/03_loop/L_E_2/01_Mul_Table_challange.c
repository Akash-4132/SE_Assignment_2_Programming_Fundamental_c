// Challenge: Allow the user to input the range of the multiplication table (e.g., from 1 to N)

#include <stdio.h>

 main() {
    int num, range, i;

    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("Enter the range (e.g., 1 to N): ");
    scanf("%d", &range);

    printf("Multiplication table for %d from 1 to %d:\n", num, range);
    for (i = 1; i <= range; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    
}
