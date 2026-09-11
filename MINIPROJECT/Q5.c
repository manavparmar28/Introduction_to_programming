#include <stdio.h>

int main() {
    int minutes[7] = {0};
    int choice, i;
    int total, highest;
    float average;
    char confirm;
    FILE *file;

    do {
        printf("\n=== Music Listening Logger ===\n");
        printf("1. Log Listening Minutes\n");
        printf("2. View Weekly Report\n");
        printf("3. Reset Weekly Data\n");
        printf("4. Exit\n");

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

                // Open file in write mode
                file = fopen("music_log.txt", "w");

                if (file == NULL) {
                    printf("Error opening file!\n");
                    break;
                }

                // Save data to the file
                for (i = 0; i < 7; i++) {
                    fprintf(file, "%d\n", minutes[i]);
                }

                fclose(file);

                printf("Listening data saved successfully!\n");
                break;

            case 2:
                // Open file in read mode
                file = fopen("music_log.txt", "r");

                if (file == NULL) {
                    printf("No music log found!\n");
                    break;
                }

                total = 0;
                highest = 0;

                // Read data from file
                for (i = 0; i < 7; i++) {
                    fscanf(file, "%d", &minutes[i]);

                    total = total + minutes[i];

                    if (minutes[i] > highest) {
                        highest = minutes[i];
                    }
                }

                fclose(file);

                average = total / 7.0;

                printf("\n=== Weekly Report ===\n");
                printf("Total Listening: %d minutes\n", total);
                printf("Average Listening: %.2f minutes\n", average);
                printf("Highest Listening: %d minutes\n", highest);

                break;

            case 3:
                // Ask for confirmation before resetting
                printf("\nAre you sure you want to reset weekly data? (Y/N): ");
                scanf(" %c", &confirm);

                if (confirm == 'Y' || confirm == 'y') {

                    // Clear the array
                    for (i = 0; i < 7; i++) {
                        minutes[i] = 0;
                    }

                    // Clear the contents of the file
                    file = fopen("music_log.txt", "w");

                    if (file != NULL) {
                        fclose(file);
                        printf("Weekly data has been reset successfully!\n");
                    } else {
                        printf("Error clearing music_log.txt!\n");
                    }

                } else {
                    printf("Reset cancelled. Your data is safe.\n");
                }

                break;

            case 4:
                printf("\nThank you for using Music Listening Logger!\n");
                break;

            default:
                printf("\nInvalid choice! Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}
