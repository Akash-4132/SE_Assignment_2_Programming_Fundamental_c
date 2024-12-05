//Accept number of students from user. I need to give 5 apples to each
// student. How many apples are required?
#include <stdio.h>

int main() {
    int num_students;  
    int apples_per_student = 5;  
    int total_apples;  

   
    printf("Enter the number of students: ");
    scanf("%d", &num_students);

    // Calculate the total apples required
    total_apples = num_students * apples_per_student;

   
    printf("Total number of apples required: %d\n", total_apples);

   
}
