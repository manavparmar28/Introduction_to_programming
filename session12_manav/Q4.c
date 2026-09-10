#include<stdio.h>
#include<string.h>

struct InstaProfile{
    char username[50];
    int followers;

    struct Bio{
        char description[100];
        int age;
    }bio;
};

int main(){
    struct InstaProfile ip = {"@manav.parmar",677,{"BCA Student",20}};

    printf("Insta Profile: %s\n",ip.username);
    printf("Followers: %d\n",ip.followers);
    printf("Bio: %s:%d",ip.bio.description,ip.bio.age);
}
