
#include <stdio.h>

void add(float a, float b) {
    printf("Result: %.2f\n", a + b);
}

void subtract(float a, float b) {
    printf("Result: %.2f\n", a - b);
}

void multiply(float a, float b) {
    printf("Result: %.2f\n", a * b);
}

void divide(float a, float b) {
    if (b != 0) {
        printf("Result: %.2f\n", a / b);
    } else {
        printf("Error: Division by zero\n");
    }
}

int main() {
    float num1, num2;
    int choice;

    while (1) {
        printf("\nSimple Calculator\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 5) {
            break;
        }

        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);

        switch (choice) {
            case 1:
                add(num1, num2);
                break;
            case 2:
                subtract(num1, num2);
                break;
            case 3:
                multiply(num1, num2);
                break;
            case 4:
                divide(num1, num2);
                break;
            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}


*/OUTPUT:
Simple Calculator
1. Add
2. Subtract
3. Multiply
4. Divide
5. Exit
Enter your choice: 1
Enter two numbers: 12 12
Result: 24.00

Simple Calculator
1. Add
2. Subtract
3. Multiply
4. Divide
5. Exit
Enter your choice: 4
Enter two numbers: 22 52


Result: 11.00

Simple Calculator
1. Add
2. Subtract
3. Multiply
4. Divide
5. Exit
Enter your choice: 4
Enter two numbers:  12 8912 89
Result: 0.13

Simple Calculator
1. Add
2. Subtract
3. Multiply
4. Divide
5. Exit
EXPLANATION:
Functions: The program uses separate functions for each operation.
Menu: The user can select the desired operation and input two numbers.
Loop: The program runs in a loop, allowing the user to perform multiple operations until they choose to exit./*

