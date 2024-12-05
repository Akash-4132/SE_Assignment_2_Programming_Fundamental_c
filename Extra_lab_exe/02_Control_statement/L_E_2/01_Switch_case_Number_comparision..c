#include <stdio.h>

 main() {
    int num1, num2, num3;

   
       printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    
    int largest, smallest;

    // Using switch-case 
         switch ((num1 > num2) + (num1 > num3) * 2) {
        case 2: 
            largest = num1;
            switch ((num2 < num3) * 2 + (num2 <= num3)) {
                case 0: 
                    smallest = num2;
                    break;
                case 2:
                    smallest = num3;
                    break;
            }
            break;
        case 1:
            largest = num2;
            switch ((num1 < num3) * 2 + (num1 <= num3)) {
                case 0:
                    smallest = num1;
                    break;
                case 2: 
                    smallest = num3;
                    break;
            }
            break;
        case 0: 
            largest = num3;
            switch ((num1 < num2) * 2 + (num1 <= num2)) {
                case 0: 
                    smallest = num1;
                    break;
                case 2: 
                    smallest = num2;
                    break;
            }
            break;
    }

   
    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);

  
}
