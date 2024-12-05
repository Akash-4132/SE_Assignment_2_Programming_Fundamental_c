#include <stdio.h>


void reverse_string(char str[]) {
    int start = 0, end = 0;
    char temp;

    //  the length of the string 
    while (str[end] != '\0') {
        end++;
    }
    end--;  
    // Reverse the string by swapping characters from start to end
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

 main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);  

    // Remove the newline character if it is read by fgets
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == '\n') {
            str[i] = '\0';
            break;
        }
        i++;
    }
    reverse_string(str);
    printf("Reversed string: %s\n", str);
}
