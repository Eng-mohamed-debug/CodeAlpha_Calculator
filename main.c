#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    double num1, num2, result;  
    char operation;

    printf("Enter the First Number: ");
    scanf("%lf", &num1);

    printf("Enter the second Number: ");
    scanf("%lf", &num2);

    printf("Insert the Operation you want (+, -, /, *): ");
    scanf(" %c", &operation);
    
    switch (operation)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if(num2 == 0)
        {
            printf("You can't divide by zero.\n");
            return 1; // to indicate the error
        }
        else
        {
            result = num1 / num2;
        }
        break;
    default:
        printf("Enter a valid option");
        break;
    }

    printf("%.2lf %c %.2lf = %.2lf", num1, operation, num2, result);
    return 0;
}