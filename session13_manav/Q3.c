#include<stdio.h>

int main(){
    FILE *fp;

    fp = fopen("playlist.txt","a");

    if(fp == NULL)
    {
        printf("File does not exists\n");
        return 0;
    }

    fprintf(fp,"Winning Speech\n");
    fprintf(fp,"Boyfriend\n");
    printf("Two song added!!");

    fclose(fp);
}
