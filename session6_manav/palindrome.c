#include<stdio.h>

int main(){
    int num,rem,rev=0;

    printf("Enter Number: ");
    scanf("%d",&num);

    int og = num;

    while(num>0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }
    if(og == rev)
    {
        printf("Number is Palindrome!");
    }
    else
    {
        printf("Number is not Palindrome!");
    }
}
