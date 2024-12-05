#include <stdio.h>

 main() {
    int num1, num2, num3;

    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    
    int largest, smallest;

   // largest number
    if (num1 >= num2 && num1 >= num3) {
        largest = num1;
    } else if (num2 >= num1 && num2 >= num3) {
        largest = num2;
    } else {
        largest = num3;
    }

    //  smallest number
    if (num1 <= num2 && num1 <= num3) {
        smallest = num1;
    } else if (num2 <= num1 && num2 <= num3) {
        smallest = num2;
    } else {
        smallest = num3;
    }

    
    printf("\n Largest number: %d", largest);
    printf("\n\n Smallest number: %d", smallest);

   
}
