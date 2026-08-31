#include<stdio.h>

int findeven(int arr[]){
    int sum;
    for(int i=0;i<10;i++){
        if(arr[i]%2==0)
        {
            printf("%d\n",arr[i]);
            sum =sum + arr[i];
        }
    }
    printf("\n");
    printf("Sum of Even Numbers: %d",sum);
}

int main(){
    int arr[10];
    printf("--- Enter 10 numbers ---\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\n");
    printf("--- Even Numbers ---\n");
    findeven(arr);
}
