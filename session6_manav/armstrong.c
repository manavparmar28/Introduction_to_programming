#include<stdio.h>

int main(){
    int num,rem,sum=0;

    printf("Enter Number: ");
    scanf("%d",&num);

    int og = num;

    while(num>0)
    {
        rem = num%10;
        sum = sum + (rem*rem*rem);
        num = num/10;
    }
    if(og == sum)
    {
        printf("Number is Armstrong!");
    }
    else
    {
        printf("Number is not Armstrong!");
    }
}
