#include <stdio.h>
#include <ctype.h>

void capitalizeFirstLetter(char str[])
{
    if (str[0] != '\0')
    {
        str[0] = toupper(str[0]);
    }
}

int main()
{
    char productName[50];
    char username[50];

    printf("Enter product name: ");
    scanf("%s", productName);

    printf("Enter username: ");
    scanf("%s", username);

    capitalizeFirstLetter(productName);
    capitalizeFirstLetter(username);

    printf("Product Name: %s\n", productName);
    printf("Username: %s\n", username);

    return 0;
}
