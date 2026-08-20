#include<stdio.h>

int main(){
    float salary,tax,annual_income;

    printf("Enter your monthly salary: ");
    scanf("%f",&salary);
    annual_income = salary * 12;
    printf("Your annual income: %.2f\n",annual_income);
    if(annual_income>=300000 && annual_income<500000)
    {
        tax = annual_income * 3 /100;
    }
    else if(annual_income>=500000 && annual_income<700000)
    {
        tax = annual_income * 5 /100;
    }
    else if(annual_income>=700000)
    {
        tax = annual_income * 7 /100;
    }
    else
    {
        tax = 0;
    }

    float net_salary = annual_income - tax;

    printf("Your Net Salary: %.2f",net_salary);
}
