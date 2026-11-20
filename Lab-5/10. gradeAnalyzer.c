#include <stdio.h>
int main(){
    char grade = ' ';

    while (grade != 'X' && grade != 'x')
    {
        printf("\nEnter grade (A, B, C, D, F) or X to exit: ");
        scanf(" %c", &grade);

        switch (grade)
        {
            case 'A':
            case 'B':
            case 'C':
                switch (grade)
                {
                    case 'A': printf("Excellent!"); break;
                    case 'B': printf("Very Good!"); break;
                    case 'C': printf("Good!"); break;
                }
                printf("Pass");
                break;

            case 'D':
                switch (grade)
                {
                    case 'D': printf("Needs Improvement\n"); break;
                }
                printf(" Pass");
                break;

            case 'F':
                switch (grade)
                {
                    case 'F': printf("Failed! Work harder."); break;
                }
                break;

            case 'X':
            case 'x':
                printf("Program stopped.");
                break;

            default:
                printf("Invalid grade!");
        }
    }

    return 0;
}