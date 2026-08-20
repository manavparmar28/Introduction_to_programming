#include<stdio.h>

float calculateFinalprice(float product_price, float discount_per, int isMember){
    float discount = (product_price * discount_per) /100;
    float final_price = product_price - discount;

    if(isMember==1)
    {
        final_price = final_price - (final_price * 5)/100;
    }

    return final_price;
}

int main(){
    float product_price = 1000;
    float discount_per = 20;
    int isMember = 1;

    float final_price = calculateFinalprice(product_price,discount_per,isMember);

    printf("Final Price = %.2f",final_price);

    return 0;
}
