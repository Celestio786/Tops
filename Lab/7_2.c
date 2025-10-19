#include <stdio.h>

int main() {
    int i;

    printf("Using continue statement:\n");
    for (i = 1; i <= 10; i++) {
        if (i == 3)
            continue;
        printf("%d ", i);
    }

    printf("\nSkipped number 3.\n");
    return 0;
}
