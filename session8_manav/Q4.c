#include <stdio.h>
#include <string.h>

char* formatPrice(int price)
{
    static char result[30];
    char temp[20];
    int len, j = 0, count = 0;

    sprintf(temp, "%d", price);
    len = strlen(temp);

    strcpy(result, "Rs.");

    for (int i = 0; i < len; i++)
    {
        result[3 + j] = temp[i];
        j++;
        count++;

        if ((len - i - 1) % 3 == 0 && i != len - 1)
        {
            result[3 + j] = ',';
            j++;
        }
    }

    result[3 + j] = '\0';

    return result;
}

int main()
{
    int price1 = 1599;
    int price2 = 24999;
    int price3 = 799;

    printf("Product 1: %s\n", formatPrice(price1));
    printf("Product 2: %s\n", formatPrice(price2));
    printf("Product 3: %s\n", formatPrice(price3));

    return 0;
}
