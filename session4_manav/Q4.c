#include<stdio.h>
int main(){

    int likes,comments,shares;

    printf("Likes:");
    scanf("%d",&likes);
    printf("Comments:");
    scanf("%d",&comments);
    printf("Shares:");
    scanf("%d",&shares);

    if(likes>=1000 || comments>200 && shares>=50)
    {
        printf("Your post is trending...");
    }
    else
    {
        printf("Your post is not trending...");
    }
}
