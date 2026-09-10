#include <stdio.h>

struct Student
{
    int rollNo;
    char name[50];
    float marks;
};

int main()
{
    int n, choice, i, count = 0;

    printf("How many students: ");
    scanf("%d", &n);

    struct Student students[n];

    do
    {
        printf("\n===== Student Menu =====\n");
        printf("1. Add Student\n");
        printf("2. Show All Students\n");
        printf("3. Continue\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                if(count < n)
                {
                    printf("\nEnter Roll No: ");
                    scanf("%d", &students[count].rollNo);

                    printf("Enter Name: ");
                    scanf(" %[^\n]", students[count].name);

                    printf("Enter Marks: ");
                    scanf("%f", &students[count].marks);

                    count++;

                    printf("\nStudent added successfully!\n");
                }
                else
                {
                    printf("\nStudent array is full!\n");
                }
                break;

            case 2:
                if(count == 0)
                {
                    printf("\nNo students added yet.\n");
                }
                else
                {
                    printf("\n===== All Students =====\n");

                    for(i = 0; i < count; i++)
                    {
                        printf("\nStudent %d\n", i + 1);
                        printf("Roll No: %d\n", students[i].rollNo);
                        printf("Name: %s\n", students[i].name);
                        printf("Marks: %.2f\n", students[i].marks);
                    }
                }
                break;

            case 3:
                printf("\nContinuing menu...\n");
                break;

            case 4:
                printf("\nProgram ended.\n");
                break;

            default:
                printf("\nInvalid choice!\n");
        }

    } while(choice != 4);

    return 0;
}
