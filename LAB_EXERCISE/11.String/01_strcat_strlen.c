// string length (strlen)and concat (strcat)

#include <stdio.h>

 main() {
    char str1[50], str2[50];

    
    printf("Enter first string: ");
     gets(str1);
    

    printf("Enter second string: ");
    gets(str2);
    

    // Concatenate str2 to str1
    strcat(str1, str2);

    // Output: Print the concatenated string and its length
    printf("Concatenated string: %s\n", str1);
    printf("Length of concatenated string: %lu\n", strlen(str1));

   
}
