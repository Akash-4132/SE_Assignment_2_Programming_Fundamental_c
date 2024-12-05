#include <stdio.h>

 main() {
    FILE *file;
    char str[] = "This is a test string written to the file.";

    // Create and open the file for writing 
    file = fopen("testfile.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing.\n");
        return 1; 
    }
	  // Write the string to the file
    fprintf(file,"%s",str);

   
    fclose(file);

    // Reopen the file for reading 
    file = fopen("testfile.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading.\n");
        return 1; 
    }

    // Read and display the contents of the file
    printf("File contents: ");
    char ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);  // Display each character read from the file
    }
	
    fclose(file);

}
