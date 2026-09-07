#include<stdio.h>
#include<string.h>

int main(){
    char user1[50],user2[50];

    printf("Enter username 1:");
    scanf("%s",&user1);

    printf("Enter username 2:");
    scanf("%s",&user2);

    if(strcmp(user1, user2) == 0)
    {
        printf("Both strings are same");
    }
    else
    {
        printf("Both strings are not same");
    }
}
