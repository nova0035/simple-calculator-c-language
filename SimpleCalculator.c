#include <stdio.h>
#include <math.h>

int main() {

    int choice = -1, choice1 = -1;
    float num1 = 0, num2 = 0;

    do {

        printf("\n\nMain Menu\n\n");

        printf("1) Simple Arithmetic Operations\n");
        printf("2) Square\n");
        printf("3) Cube\n");
        printf("0) Exit\n\n");

        printf("Enter Choice : ");
        scanf("%d", &choice);

        if (choice == 1) {

            do {

                printf("\nSimple Arithmetic Operations Menu\n");
                printf("\n1) Addition Of 2 Numbers");
                printf("\n2) Subtraction Of 2 Numbers");
                printf("\n3) Multiplication Of 2 Numbers");
                printf("\n4) Division Of 2 Numbers");
                printf("\n0) Back To Main Menu\n\n");

                printf("Enter Choice : ");
                scanf("%d", &choice1);

                if (choice1 >= 1 && choice1 <= 4) {
                    printf("Enter the first number: ");
                    scanf("%f", &num1);

                    printf("Enter the second number: ");
                    scanf("%f", &num2);

                    switch (choice1) {
                        case 1:
                            printf("Addition: %.2f\n", num1 + num2);
                            break;
                        case 2:
                            printf("Subtraction: %.2f\n", num1 - num2);
                            break;
                        case 3:
                            printf("Multiplication: %.2f\n", num1 * num2);
                            break;
                        case 4:
                            if (num2 != 0) {
                                printf("Division: %.2f\n", num1 / num2);
                            } else {
                                printf("Cannot divide by zero!\n");
                            }
                            break;
                    }
                }

            } while (choice1 != 0);

        } else if (choice == 2) {

            printf("\nFind Square\n");

            printf("Enter Number To Find Its Square : ");
            scanf("%f", &num1);

            printf("Square Of Number %.2f Is : %.2f\n", num1, pow(num1, 2));
        } else if (choice == 3) {

            printf("\nFind Cube\n");

            printf("Enter Number To Find Its Cube : ");
            scanf("%f", &num1);

            printf("Cube Of Number %.2f Is : %.2f\n", num1, pow(num1, 3));

        }

    } while (choice != 0);

    return 0;
}

