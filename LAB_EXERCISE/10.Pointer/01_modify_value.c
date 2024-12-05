//Use a pointer to modify the value of a variable and print the result.

#include <stdio.h>

 main() {
    int num = 10; 
	int *ptr; 
  
    printf("Original value of num: %d\n", num);

    // Point the pointer to the address of num
    ptr = &num;

    // Use the pointer to modify the value of num
    *ptr = 20;  
    
    printf("Modified value of num: %d\n", num);
   
}
