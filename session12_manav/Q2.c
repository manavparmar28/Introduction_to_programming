#include<stdio.h>
#include<string.h>

struct FoodItem{
    char itemName[500];
    float price;
    float rating;
};

int main(){
    struct FoodItem f[3];

    strcpy(f[0].itemName,"Margherita Pizza");
    f[0].price = 400;
    f[0].rating = 4.5;

    strcpy(f[1].itemName,"Burger");
    f[1].price = 150;
    f[1].rating = 4.2;

    strcpy(f[2].itemName,"Paneer Tikka");
    f[2].price = 350;
    f[2].rating = 4.7;

    for(int i=0;i<3;i++)
    {
    printf("Food: %s\n",f[i].itemName);
    printf("Price: %.2f\n",f[i].price);
    printf("Rating: %.2f\n\n",f[i].rating);
    }
}
