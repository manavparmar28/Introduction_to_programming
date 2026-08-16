#include<stdio.h>
int main()
{
    const float gst_rate=18.00;
    float base_price;
    float gst;
    float final_price;

    printf("Enter the base price: ");
    scanf("%f",&base_price);
    gst= gst_rate * base_price / 100;
    final_price= base_price + gst;

    printf("Final Price: %.2f",final_price);
}
