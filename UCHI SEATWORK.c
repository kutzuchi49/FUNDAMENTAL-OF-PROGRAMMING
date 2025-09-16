#include <stdio.h>

int main() {
    int grade;

    // Ask user for input
    printf("Enter your grade (0-100): ");
    scanf("%d", &grade);

    // Validate input
    if (grade < 0 || grade > 100) {
        printf("Invalid grade. Must be between 0 and 100.\n");
        return 1;
    }

    // Use switch statement
    switch (grade / 10) {
        case 10: // grade == 100
        case 9:
            printf("Equivalent Grade: A\n");
            break;
        case 8:
            printf("Equivalent Grade: B\n");
            break;
        case 7:
        case 6:
            printf("Equivalent Grade: C\n");
            break;
        default:
            printf("Equivalent Grade: FAILED\n");
            break;
    }

    return 0;
}
