// revrse number
#include <stdio.h>

int main() {
    int num;

    
    printf("Enter 5 numbers:\n");

    // Use a for loop to take 5 numbers and store them temporarily in variables
    for (int i = 5; i >= 1; i--) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        
        printf("%d ", num);
    }

    printf("\n");  
}
