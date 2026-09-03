#include<stdio.h>

int main(){
    int playlistRatings[3][5]={{3,5,4,5,4},{4,4,5,3,5},{5,3,5,4,3}};

    for(int i=0;i<5;i++)
    {
        printf("%d ",playlistRatings[1][i]);
    }
}
