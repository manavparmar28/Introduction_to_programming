#include <stdio.h>

void ascending(int arr[])
{
    int temp;

    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Ascending order:\n");

    for(int i=0;i<10;i++)
    {
        printf("%d\n", arr[i]);
    }
}

int main()
{
    int arr[10];

    printf("Enter 10 numbers:\n");

    for(int i=0;i<10;i++)
    {
        scanf("%d", &arr[i]);
    }

    ascending(arr);

    return 0;
}
