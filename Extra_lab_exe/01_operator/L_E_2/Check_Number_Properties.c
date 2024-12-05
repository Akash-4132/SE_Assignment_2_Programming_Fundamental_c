#include <stdio.h>

 main() {
    int num;

    
    printf("Enter an integer: ");
    scanf("%d", &num);

    
    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }

    
    if (num > 0) {
        printf("%d is positive.\n", num);
    } else if (num < 0) {
        printf("%d is negative.\n", num);
    } 
    

  
    if (num % 3 == 0 && num % 5 == 0) 
        printf("%d is a multiple of both 3 and 5.\n", num);
    else 
       printf("%d is not a multiple of both 3 and 5.\n", num);
    

}
