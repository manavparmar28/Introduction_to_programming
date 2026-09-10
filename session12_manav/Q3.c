#include<stdio.h>
#include<string.h>

struct MovieShow{
        char movie[50];
        int screen;

        struct Time{
            int hours;
            int minutes;
        }time;
};

int main(){
    struct MovieShow show = {"Dhurandhar",2,{3,40}};

    printf("Movie: %s\n",show.movie);
    printf("Screen: %d\n",show.screen);
    printf("Time: %d:%d",show.time.hours,show.time.minutes);
}
