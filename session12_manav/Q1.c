#include<stdio.h>
#include<string.h>

struct Playlist{
    char title[50];
    char artist[50];
    int duration;
};

int main(){
    struct Playlist p;

    strcpy(p.title,"52 Bars");
    strcpy(p.artist,"Karan Aujla");
    p.duration = 223;

    printf("Title: %s\n",p.title);
    printf("Artist: %s\n",p.artist);
    printf("Duration: %d",p.duration);
}
