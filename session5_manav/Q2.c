#include<stdio.h>
#include<string.h>

int main(){
    char meal[20];

    printf("Enter your meal: ");
    scanf("%s",&meal);

    if(strcmp(meal,"breakfast")==0)
    {
        printf("Try some Masala Dosa!");
    }
    else if(strcmp(meal,"lunch")==0)
    {
        printf("Try some Biryani!");
    }
    else if(strcmp(meal,"dinner")==0)
    {
        printf("Try some Paneer Tikka!");
    }
    else if(strcmp(meal,"snack")==0)
    {
        printf("Try some Samosa!");
    }
    else
    {
        printf("Try some fruits!");
    }

    return 0;
}
