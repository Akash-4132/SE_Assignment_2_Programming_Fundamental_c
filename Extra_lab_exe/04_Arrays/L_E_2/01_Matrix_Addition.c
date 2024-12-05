// Matrix Addition

#include <stdio.h>

int main() {
    int mat1[3][3], mat2[3][3], result_add[3][3], result_mult[3][3];
    int i, j, k;

    
    printf("Enter elements of first 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
		 scanf("%d", &mat1[i][j]);

    printf("Enter elements of second 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++) 
		scanf("%d", &mat2[i][j]);

    // Matrix Addition
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
		 result_add[i][j] = mat1[i][j] + mat2[i][j];

    
    printf("\nMatrix Addition:");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) 
		printf("%d ", result_add[i][j]);
        printf("\n");
    }

    // Matrix Multiplication
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++) {
            result_mult[i][j] = 0;
            for (k = 0; k < 3; k++) 
			result_mult[i][j] += mat1[i][k] * mat2[k][j];
        }

  
    printf("\nMatrix Multiplication:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) printf("%d ", result_mult[i][j]);
        printf("\n");
    }

   
}
