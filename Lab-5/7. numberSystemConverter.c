#include <stdio.h>
int main(){
    int n, ch, i, r;
    char again;

    do
    {
        printf("\n1. Binary\n2. Octal\n3. Hexadecimal");
        printf("\nEnter choice: ");
        scanf("%d", &ch);

        printf("Enter number (0-255): ");
        scanf("%d", &n);

        if (n < 0 || n > 255){
            printf("Invalid number");
        } else {
            switch (ch)
            {
                case 1:
                    for (i = 7; i >= 0; i--)
                        printf("%d", (n >> i) & 1);
                    break;

                case 2:
                    printf("%o", n);
                    break;

                case 3:
                    printf("%X", n);
                    break;

                default:
                    printf("Invalid choice");
            }
        }

        printf("\nContinue? (Y/N): ");
        scanf(" %c", &again);

    } while (again == 'Y' || again == 'y');

    return 0;
}