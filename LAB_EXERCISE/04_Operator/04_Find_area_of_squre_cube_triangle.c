// Find Area of Square formula : a = a2 5. Find Area of Cube formula : a =
// 6a2 6. Find area of Triangle Formula : A = 1/2 × b × h

#include <stdio.h>

int main() {
   
    float a, b, h, square_area, cube_surface_area, triangle_area;

 
    printf("Enter the side length of the square: ");
    scanf("%f", &a);
    square_area = a * a;  // Area of square: a^2
    printf("Area of the square: %.2f\n", square_area);

 
    printf("Enter the side length of the cube: ");
    scanf("%f", &a);
    cube_surface_area = 6 * a * a;  // Surface area of cube: 6a^2
    printf("Surface area of the cube: %.2f\n", cube_surface_area);

    // Input and calculation for the area of a triangle
    printf("Enter the base length of the triangle: ");
    scanf("%f", &b);
    printf("Enter the height of the triangle: ");
    scanf("%f", &h);
    triangle_area = 0.5 * b * h;  // Area of triangle: 1/2 * b * h
    printf("Area of the triangle: %.2f\n", triangle_area);

    
}
