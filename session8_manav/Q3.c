#include<stdio.h>

int IncreaseFollowersByValue(int followers){
    followers=followers+1000;
    return followers;
}

void IncreaseFollowersByReference(int *followers){
    *followers=*followers+1000;
}

int main(){
    int followers=1000;
    printf("Original followers: %d\n",followers);

    printf("After pass-by-value: %d\n",IncreaseFollowersByValue(followers));

    printf("Original after pass-by-value: %d\n",followers);

    IncreaseFollowersByReference(&followers);

    printf("Original after pass-by-reference: %d\n",followers);
}
