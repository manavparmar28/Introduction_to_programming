#include<stdio.h>
#include<string.h>

int main(){

    char team[50];

    printf("Enter your team: ");
    scanf("%s",&team);

    if(strcmp(team,"Mi")==0 || strcmp(team,"Mumbai Indians")==0)
    {
        printf("Go Mumbai Indians!");
    }
    else if(strcmp(team,"CSK")==0 || strcmp(team,"Chennai Super Kings")==0)
    {
        printf("Chennai Super Kings for the win!");
    }
    else if(strcmp(team,"RCB")==0 || strcmp(team,"Royal Challengers Bengaluru")==0)
    {
        printf("Ee Saala Cup Naamde!");
    }
    else if(strcmp(team,"GT")==0 || strcmp(team,"Gujarat Titans")==0)
    {
        printf("Aava De!");
    }
    else if(strcmp(team,"KKR")==0 || strcmp(team,"Kolkata Knight Riders")==0)
    {
        printf("Korbo Lorbo Jitbo Re!");
    }
    else if(strcmp(team,"RR")==0 || strcmp(team,"Rajsthan Royals")==0)
    {
        printf("Halaa Bol!");
    }
    else if(strcmp(team,"PBKS")==0 || strcmp(team,"Punjab Kings")==0)
    {
        printf("Chak De Punjab!");
    }
    else if(strcmp(team,"DC")==0 || strcmp(team,"Delhi Capitals")==0)
    {
        printf("Roar Machaa!");
    }
    else if(strcmp(team,"SRH")==0 || strcmp(team,"Sunrisers Hyderabad")==0)
    {
        printf("Orange Army!");
    }
    else if(strcmp(team,"LSG")==0 || strcmp(team,"Lucknow Super Giants")==0)
    {
        printf("Jay Ho Lucknow!");
    }
    else
    {
        printf("Team not found!");
    }

    return 0;
}
