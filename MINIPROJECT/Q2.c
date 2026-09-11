#include <stdio.h>

int main() {
    int minutes[7];
    int choice, i;

    do {
        printf("\n=== Music Listening Logger ===\n");
        printf("1. Log Listening Minutes\n");
        printf("2. View Weekly Summary\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                // Enter listening minutes for each day
                printf("\nEnter your music listening minutes:\n");

                for (i = 0; i < 7; i++) {
                    printf("Day %d: ", i + 1);
                    scanf("%d", &minutes[i]);
                }

                printf("Listening data saved successfully!\n");
                break;

            case 2:
                // Display weekly listening summary
                printf("\n=== Weekly Summary ===\n");

                for (i = 0; i < 7; i++) {
                    printf("Day %d: %d minutes\n", i + 1, minutes[i]);
                }
                break;

            case 3:
                printf("\nThank you for using Music Listening Logger!\n");
                break;

            default:
                printf("\nInvalid choice! Please try again.\n");
        }

    } while (choice != 3);

    return 0;
}
