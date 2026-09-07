#include<stdio.h>

void incrementFollowers(int *followers, int n){
    for (int i=0;i<n;i++)
    {
        *followers = *followers + 100;
        followers++;
    }
}

int main(){
    int followers[]={1000,2100,1500,1700,2600};

    incrementFollowers(followers, 5);

    printf("Updated followers counts:\n");

    for(int i=0;i<5;i++)
    {
        printf("%d\n",followers[i]);
    }
}
