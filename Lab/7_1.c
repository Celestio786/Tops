#include <stdio.h>

int main() {
    int i;

    printf("Using break statement:\n");
    for (i = 1; i <= 10; i++) {
        if (i == 5)
            break; 
        printf("%d ", i);
    }

    printf("\nProgram stopped at number 5.\n");
    return 0;
}
