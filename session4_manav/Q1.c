#include<stdio.h>

float calculateTotal(float itemPrice, int quantity){
    return itemPrice * quantity;
}

int main(){
    float itemPrice = 100.50;
    int quantity = 3;

    float total = calculateTotal(itemPrice,quantity);

    printf("Total bill = %.2f",total);

    return 0;
}
