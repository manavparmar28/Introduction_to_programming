#include<stdio.h>

int main(){
    int likes = 500;
    int *ptrLikes = &likes;

    printf("Likes: %d\n",likes);
    printf("Address stored in ptrLikes: %p",(void *)ptrLikes);
}
