/* grade based on the following conditions:
		o Marks > 90: Grade A
		o Marks > 75 and <= 90: Grade B
		o Marks > 50 and <= 75: Grade C
		o Marks <= 50: Grade D
		
		*/
#include <stdio.h>

 main() {
    float marks;

    
    printf("Enter the marks of the student: ");
    scanf("%f", &marks);

    // Check the grade based on the marks
    if (marks > 90) {
        printf("\n\n Grade A");
    } else if (marks > 75 && marks <= 90) {
        printf("\n\n Grade B");
    } else if (marks > 50 && marks <= 75) {
        printf("\n\n Grade C");
    } else if (marks <= 50) {
        printf("\n\n Grade D");
    } else {
        printf("Invalid input");
    }

    
}
