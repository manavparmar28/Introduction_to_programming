#include<stdio.h>

int main(){
    int dailySteps[7]={5000,6500,7000,6800,9000,8200,7700};

    for(int i=0;i<7;i++)
    {
        printf("Day %d: %d\n",i+1,dailySteps[i]);
    }
}
