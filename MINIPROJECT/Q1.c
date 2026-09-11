#include <stdio.h>

int main() {
    int minutes[7];
    int i;

    printf("=== Music Listening Logger ===\n\n");

    // Take listening minutes for each day
    for (i = 0; i < 7; i++) {
        printf("Enter music listening minutes for day %d: ", i + 1);
        scanf("%d", &minutes[i]);
    }

    // Display the stored data
    printf("\n=== Weekly Music Listening ===\n");

    for (i = 0; i < 7; i++) {
        printf("Day %d: %d minutes\n", i + 1, minutes[i]);
    }

    return 0;
}
