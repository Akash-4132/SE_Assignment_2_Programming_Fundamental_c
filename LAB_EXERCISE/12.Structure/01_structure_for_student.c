#include <stdio.h>

// Structure definition
struct Student {
    int rollno;        
    char sname[20];       // All are Members of structure
    int sub[5];       
    float per;         
     
}S;

int main() {
 //   struct Student S;   // Declare a structure variable

    int i, total = 0;

    printf("\n\n\t----------------------------------");
    printf("\n\n\t Enter Rollno : ");
    scanf("%d", &S.rollno);   

    printf("\n\n\t Enter Name of the Student : ");
    scanf("%s", S.sname);      

    total = 0;
    for(i = 0; i < 5; i++) {
        printf("\n\n\t Enter marks for subject[%d] : ", i + 1);
        scanf("%d", &S.sub[i]);  // Input marks for each subject
        total += S.sub[i];       // Add marks to total
    }

    S.per = total / 5.0f;       // Calculate percentage

    

    
    printf("\n\n\t----------------------------------------");
    printf("\n\n\t Rollno: %d", S.rollno);
    printf("\n\t Name: %s", S.sname);
    printf("\n\t Marks: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", S.sub[i]);  // Print marks for each subject
    }
    printf("\n\t Percentage: %.2f", S.per);
   
    printf("\n\n\t----------------------------------------");

}
