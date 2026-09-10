#include<stdio.h>

int main(){
    FILE *fp;
    int song;

    fp = fopen("playlist.txt","r");

    while(1)
    {
        song = fgetc(fp);
        if(song == EOF)
            break;

        printf("%c",song);
    }
    fclose(fp);
}
