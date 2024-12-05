#include <stdio.h>

 main() {
    char str[110];
    int vowels = 0, consonants= 0,digits = 0, specialChars = 0;
    
    
    printf("Enter a string: ");
    gets(str); 
    
    // Iterate through each character of the string
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        
        
        if (isalpha(ch)) {
         
            ch = tolower(ch);
            
            // Check if the character is a vowel
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
     // Check if the character is a digit
        else if (isdigit(ch)) {
            digits++;
        }
                // Check if it's a special character
        else if (!isspace(ch)) {
            specialChars++;
        }
    }
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Special Characters: %d\n", specialChars);

}
