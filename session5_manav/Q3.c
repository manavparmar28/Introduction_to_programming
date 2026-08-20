#include<stdio.h>

int main(){
    float total_cart_amount;
    float discount;
    float final_amount;

    printf("Enter total cart amount: ");
    scanf("%f",&total_cart_amount);

    if(total_cart_amount>1000)
    {
        discount=(total_cart_amount*10)/100;
        if(total_cart_amount>2000)
        {
            discount=(total_cart_amount*20)/100;
        }
    }
    else
    {
        printf("No discount\n");
    }
    final_amount=total_cart_amount-discount;
    printf("Final Amount:%.2f",final_amount);
}
