#include<stdio.h>

int main(){
    int arr[3][3]={{10,20,30},{40,50,60},{70,80,90}};
    int sum=0;

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",arr[i][j]);
            sum = sum + arr[i][j];
        }
        printf("\n");
    }
    printf("\nSum of all elements: %d",sum);
}
