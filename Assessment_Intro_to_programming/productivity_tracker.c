#include <stdio.h>

struct StudyLog
{
    char subject[40];
    float hours[7];
};

void calculateReport(struct StudyLog logs[], int n)
{
    int i, j;
    float total;
    float average;

    printf("\n========== WEEKLY REPORT ==========\n");

    for (i = 0; i < n; i++)
    {
        total = 0;

        for (j = 0; j < 7; j++)
        {
            total = total + logs[i].hours[j];
        }

        average = total / 7;

        printf("\nSubject: %s\n", logs[i].subject);
        printf("Weekly Total: %.2f hours\n", total);
        printf("Daily Average: %.2f hours\n", average);

        printf("Progress Chart:\n");

        for (j = 0; j < 7; j++)
        {
            printf("Day %d: ", j + 1);

            int k;

            for (k = 0; k < (int)logs[i].hours[j]; k++)
            {
                printf(".");
            }

            printf("\n");
        }
    }
}

void saveData(struct StudyLog logs[], int n)
{
    FILE *file;
    int i, j;

    file = fopen("productivity_log.txt", "w");

    if (file == NULL)
    {
        printf("Error opening file!\n");
        return;
    }

    for (i = 0; i < n; i++)
    {
        fprintf(file, "%s", logs[i].subject);

        for (j = 0; j < 7; j++)
        {
            fprintf(file, ",%.2f", logs[i].hours[j]);
        }

        fprintf(file, "\n");
    }

    fclose(file);

    printf("Data saved successfully to productivity_log.txt\n");
}

int main()
{
    struct StudyLog logs[3];

    int i, j;
    int choice;

    printf("===== Student Productivity Tracker =====\n");

    printf("\nEnter 3 subjects:\n");

    for (i = 0; i < 3; i++)
    {
        printf("Subject %d: ", i + 1);
        scanf(" %[^\n]", logs[i].subject);

        for (j = 0; j < 7; j++)
        {
            logs[i].hours[j] = 0;
        }
    }

    do
    {
        printf("\n========== MENU ==========\n");
        printf("1. Log Today's Study Hours\n");
        printf("2. View Weekly Report\n");
        printf("3. Save & Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            int day;

            printf("Enter day number (1-7): ");
            scanf("%d", &day);

            if (day < 1 || day > 7)
            {
                printf("Invalid day!\n");
            }
            else
            {
                for (i = 0; i < 3; i++)
                {
                    do
                    {
                        printf("Enter study hours for %s: ",
                               logs[i].subject);

                        scanf("%f", &logs[i].hours[day - 1]);

                        if (logs[i].hours[day - 1] < 0 ||
                            logs[i].hours[day - 1] > 24)
                        {
                            printf("Enter hours between 0 and 24.\n");
                        }

                    } while (logs[i].hours[day - 1] < 0 ||
                             logs[i].hours[day - 1] > 24);
                }

                printf("Today's study hours saved.\n");
            }
        }

        else if (choice == 2)
        {
            calculateReport(logs, 3);
        }

        else if (choice == 3)
        {
            saveData(logs, 3);
            printf("Program exited.\n");
        }

        else
        {
            printf("Invalid choice! Try again.\n");
        }

    } while (choice != 3);

    return 0;
}
