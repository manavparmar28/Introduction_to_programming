#include<stdio.h>

float isEligibleForOffer(int age,float order_value){
    if(age>=18 && order_value>500)
    {
        printf("You are eligible for offer");
    }
    else
    {
        printf("You are not eligible for offer");
    }
}

int main(){
    int age;
    float order_value;

    printf("Enter your age:");
    scanf("%d",&age);
    printf("Enter your value:");
    scanf("%f",&order_value);
    isEligibleForOffer(age,order_value);

    return 0;
}
