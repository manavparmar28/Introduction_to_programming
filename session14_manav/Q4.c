#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        // If the remainder is 0, the number is even
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
