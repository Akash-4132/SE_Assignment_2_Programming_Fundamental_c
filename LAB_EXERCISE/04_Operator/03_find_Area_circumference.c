#include<stdio.h>

#include<stdio.h>
#define PI 3.14159

 main() {
    float area, circumference;
    int r = 9;

    printf("\n\n\t Pi = %.5f", PI);
    printf("\n\n\t Radius = %d", r);

    Calculate area and circumference
    area = PI * r * r;
    circumference = 2 * PI * r;

    // Display results
    printf("\n\n\t Area of Circle = %.2f", area);
    printf("\n\n\t Circumference of Circle = %.2f", circumference);

    
}
