#include<stdio.h>

int main(){

    int choice,balance=0,amount,flag;

    do{
        printf("\n1. Deposite..\n");
        printf("2. Withdrawl..\n");
        printf("3. Balance check\n");

        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            printf("Enter your amount: ");
            scanf("%d",&amount);
            balance += amount;

            printf("Deposite Seccessfully!!!\n");
            break;

        case 2:
            printf("Enter your amount: ");
            scanf("%d",&amount);

            if(amount<=balance)
            {
                balance -= amount;
                printf("Withdrawl Seccessfully!!!\n");
            }
            else
            {
                printf("Insufficient balance\n");
            }
            break;

        case 3:
            printf("Your current balance is: %d\n",balance);
            break;

        default:
            printf("Invalid choice\n");
        }
        printf("\nPress 4 for reprocess ");
        scanf("%d",&flag);

    }while(flag == 4);
}
