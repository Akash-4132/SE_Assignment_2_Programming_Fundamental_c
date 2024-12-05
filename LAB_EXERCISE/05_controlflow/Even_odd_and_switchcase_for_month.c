//5. Control Flow Statements in C
/*	Q.Write a C program to check if a number is even or odd using an if-else
   statement. Extend the program using a switch statement to display the month
	name based on the user’s input (1 for January, 2 for February, etc.) 
	*/

#include <stdio.h>

int main() {
    int num, month;

    // Part 1: Check if the number is even or odd
    printf("Enter a number to check if it is even or odd: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d is an even number.\n", num);
    } else {
        printf("%d is an odd number.\n", num);
    }

    // Part 2: Display the month name based on the user's input
    printf("Enter a number between 1 and 12 to get the month name: ");
    scanf("%d", &month);

    switch (month) {
        case 1:
            printf("The month is January.\n");
            break;
        case 2:
            printf("The month is February.\n");
            break;
        case 3:
            printf("The month is March.\n");
            break;
        case 4:
            printf("The month is April.\n");
            break;
        case 5:
            printf("The month is May.\n");
            break;
        case 6:
            printf("The month is June.\n");
            break;
        case 7:
            printf("The month is July.\n");
            break;
        case 8:
            printf("The month is August.\n");
            break;
        case 9:
            printf("The month is September.\n");
            break;
        case 10:
            printf("The month is October.\n");
            break;
        case 11:
            printf("The month is November.\n");
            break;
        case 12:
            printf("The month is December.\n");
            break;
        default:
            printf("Invalid month number! Please enter a number between 1 and 12.\n");
            break;
    }

}
