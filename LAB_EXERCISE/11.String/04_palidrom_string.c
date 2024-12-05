#include <stdio.h>

#include <ctype.h>

 main() {
    char str[100];
    int start = 0, end;

   
    printf("Enter a string: ");
    gets(str);
    
   
    // Initialize 'end' to the last index of the string
    end = strlen(str) - 1;

    // Check for palindrome by comparing characters from both ends
    while (start < end) {
        // Convert both characters to lowercase for case-insensitive comparison
        if (tolower(str[start]) != tolower(str[end])) {
            printf("The string is not a palindrome.\n");
            return 0; 
        }
        start++;
        end--;
    }

  
    printf("The string is a palindrome.\n");
  
}
