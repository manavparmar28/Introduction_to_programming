#include<stdio.h>

int main(){
    int orders[]={500,465,450,625,700};
    int *ptr = orders;

    for(int i=0;i<5;i++)
    {
        printf("Order amount: %d Address: %p\n",*ptr,(void *)ptr);
        ptr++;
    }
}
