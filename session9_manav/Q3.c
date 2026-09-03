#include<stdio.h>

float CalculateAvg(int arr[]){
    int sum=0;
    for(int i=0;i<7;i++)
    {
        sum=sum+arr[i];
    }
    return (float)sum/7;
}

int main(){
    int arr[7];
    printf("Enter weekly amount\n");
    for(int i=0;i<7;i++)
    {
        printf("Day %d:",i+1);
        scanf("%d",&arr[i]);
    }
    float avg=CalculateAvg(arr);

    printf("\nAverage weekly zomato spend:%.2f",avg);
}
