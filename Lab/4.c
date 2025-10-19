#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    printf("\n Arithmetic Operations\n");
    printf("Addition: %d + %d = %d\n", a, b, a + b);
    printf("Subtraction: %d - %d = %d\n", a, b, a - b);
    printf("Multiplication: %d * %d = %d\n", a, b, a * b);
    printf("Division: %d / %d = %d\n", a, b, a / b);
    printf("Modulus: %d %% %d = %d\n", a, b, a % b);

    // Relational operations
    printf("\n--- Relational Operations ---\n");
    printf("%d == %d : %d\n", a, b, a == b);
    printf("%d != %d : %d\n", a, b, a != b);
    printf("%d > %d  : %d\n", a, b, a > b);
    printf("%d < %d  : %d\n", a, b, a < b);
    printf("%d >= %d : %d\n", a, b, a >= b);
    printf("%d <= %d : %d\n", a, b, a <= b);

    // Logical operations
    printf("\n--- Logical Operations ---\n");
    printf("(a && b) : %d\n", a && b); // true if both non-zero
    printf("(a || b) : %d\n", a || b); // true if any non-zero
    printf("!(a && b) : %d\n", !(a && b)); // negation

    return 0;
}
