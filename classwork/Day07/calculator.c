#include <stdio.h>

int addition(int n1, int n2) {
    return n1 + n2;
}

int subtraction(int n1, int n2) {
    return n1 - n2;
}

int multiplication(int n1, int n2) {
    return n1 * n2;
}

int division(int n1, int n2) {
    return n1 / n2;
}

int modulus(int n1, int n2) {
    return n1 % n2;
}

int main() {
    char operator;
    int n1, n2, result;

    printf("Enter the operation need to perform (+, -, *, /, %%): ");
    scanf(" %c", &operator); // Notice the space before %c to skip any leading whitespace
    
    char *validOperators[] = {"+", "-", "*", "/", "%"};
    int valid = 0;
    for (int i = 0; i < sizeof(validOperators) / sizeof(validOperators[0]); i++) {
        if (operator == *validOperators[i]) {
            valid = 1;
            break;
        }
    }

    if (!valid) {
        printf("Invalid Operator! Please enter a correct one.\n\n");
        return 1;
    }

    printf("Enter the first number: ");
    scanf("%d", &n1);

    printf("Enter the second number: ");
    scanf("%d", &n2);

    switch (operator) {
        case '+':
            result = addition(n1, n2);
            printf("Addition of two numbers is %d\n\n", result);
            break;
        case '-':
            result = subtraction(n1, n2);
            printf("Subtraction of two numbers is %d\n\n", result);
            break;
        case '*':
            result = multiplication(n1, n2);
            printf("Multiplication of two numbers is %d\n\n", result);
            break;
        case '/':
            if (n2 != 0) {
                result = division(n1, n2);
                printf("Division of two numbers is %d\n\n", result);
            } else {
                printf("Error! Division by zero is not allowed.\n\n");
            }
            break;
        case '%':
            result = modulus(n1, n2);
            printf("Modulus of two numbers is %d\n\n", result);
            break;
        default:
            printf("Invalid Operator! Please enter a correct one.\n\n");
            break;
    }

    return 0;
}