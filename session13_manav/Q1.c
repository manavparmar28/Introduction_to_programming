#include<stdio.h>

int main(){
        FILE *fp1;
        fp1 = fopen("playlist.txt","w");
        fprintf(fp1,"52 Bars\n");
        fprintf(fp1,"For a reason\n");
        fprintf(fp1,"MF Ghabru!\n");
        printf("File written");
        fclose(fp1);
}
