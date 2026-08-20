#include<stdio.h>

int main(){
    float sub1,sub2,sub3,total,per;

    printf("--Enter the marks of three subjects--\n");
    printf("Maths: ");
    scanf("%f",&sub1);
    printf("Science: ");
    scanf("%f",&sub2);
    printf("English: ");
    scanf("%f",&sub3);

    total=sub1+sub2+sub3;
    per=total/300*100;
    printf("Percentage: %.2f\n",per);

    if(per>95)
    {
        printf("Grade: A+");
    }
    else if(per<=95 && per>85)
    {
        printf("Grade: A");
    }
    else if(per<=85 && per>70)
    {
        printf("Grade: B");
    }
    else if(per<=70 && per>55)
    {
        printf("Grade: C");
    }
    else if(per<=55 && per>=33)
    {
        printf("Grade: D");
    }
    else
    {
        printf("Fail!!!");
    }
}
