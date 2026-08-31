#include<stdio.h>

void sumofavg(int arr[]){
    int sum=0;
    float avg;
    for(int i=0;i<10;i++)
    {
        sum = sum + arr[i];
    }
    printf("\n");
    printf("Sum is %d\n",sum);
    avg = sum/10;
    printf("Average of sum is %.2f\n",avg);
    printf("\n");
    printf("Greater than average values\n");

    for(int i=0;i<10;i++)
    {
        if(arr[i]>avg)
        {
            printf("%d\n",arr[i]);
        }
    }
}

int main(){
    int arr[10];
    printf("Enter 10 numbers\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n");
    sumofavg(arr);
}
