// Q.3 Wap to Check string is paldorme or not
#include <stdio.h>

 main() {
    char str[100], rev[100];
    int i, j, len;

   
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;  

    len = strlen(str);
    j = 0;

    // Reverse the string
    for(i = len - 1; i >= 0; i--) {
        rev[j++] = str[i];
    }
    rev[j] = '\0';  // Null-terminate the reversed string

    // Check if the string is a palindrome
    if(strcmp(str, rev) == 0)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

  
}
