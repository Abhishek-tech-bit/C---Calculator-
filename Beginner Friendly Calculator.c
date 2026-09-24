#include <stdio.h>

/* ---------- Calculator Functions ---------- */

// Addition
float add(float a, float b)
{
    return a + b;
}

// Subtraction
float subtract(float a, float b)
{
    return a - b;
}

// Multiplication
float multiply(float a, float b)
{
    return a * b;
}

// Division
float divide(float a, float b)
{
    return a / b;
}

int main()
{
    // Variables for storing the current total and next number
    float total, number;

    // Variables for storing the operator and user's choice
    char op, choice;

    // Variable to check whether the calculation was successful
    int valid;

    // Get the first number from the user
    printf("Enter first number: ");
    scanf("%f", &total);

    // Repeat calculations until the user chooses to stop
    do
    {
        // Assume the operation is valid
        valid = 1;

        // Get the operator
        printf("Enter operator (+, -, *, /): ");
        scanf(" %c", &op);

        // Get the next number
        printf("Enter next number: ");
        scanf("%f", &number);

        // Perform the selected operation
        if (op == '+')
        {
            total = add(total, number);
        }
        else if (op == '-')
        {
            total = subtract(total, number);
        }
        else if (op == '*')
        {
            total = multiply(total, number);
        }
        else if (op == '/')
        {
            // Prevent division by zero
            if (number != 0)
            {
                total = divide(total, number);
            }
            else
            {
                printf("Cannot divide by zero\n");
                valid = 0;
            }
        }
        else
        {
            // Handle an invalid operator
            printf("Invalid operator\n");
            valid = 0;
        }

        // Display the result only if the operation was successful
        if (valid)
        {
            printf("Total = %.2f\n", total);
        }

        // Ask whether the user wants to continue
        printf("Continue? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    // Display the final result
    printf("Final total = %.2f\n", total);

    return 0;
}
