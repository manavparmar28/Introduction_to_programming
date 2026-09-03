#include<stdio.h>
#include<string.h>

void addtoCart(char cart[][20],char product[20],int *count){
    strcpy(cart[*count],product);
    (*count)++;

    printf("\nUpdated Cart:\n");

    for(int i=0;i<*count;i++)
    {
        printf("%d. %s\n",i+1,cart[i]);
    }
}

int main(){
    char cart[10][20];
    char product[20];
    int count=0;

    printf("Enter product: ");
    scanf("%[^\n]",&product);

    addtoCart(cart,product,&count);

    printf("\nCart outside function:\n");
    for(int i=0;i<count;i++)
    {
        printf("%d. %s\n",i+1,cart[i]);
    }
}
