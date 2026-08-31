#include<stdio.h>

int main(){
    char teams[10][50]={"RCB","MI","CSK"};
    int count=3;
    int choice;

    while(1){
        printf("----IPL Team Menu----\n");
        printf("1. View favorite teams\n");
        printf("2. Add new team\n");
        printf("3. Exit\n");

        printf("Enter your choice:");
        scanf("%d",&choice);

        if(choice==1)
        {
            printf("--Favorite Teams--\n");
            for(int i=0;i<count;i++)
            {
                printf("%d %s\n",i+1,teams[i]);
            }
        }
        else if(choice==2)
        {
            if(count<10)
            {
                printf("Enter new team:");
                scanf("%s",&teams[count]);
                count++;
                printf("Team added successfully!\n");
            }
            else
            {
                printf("Team list is full\n");
            }
        }
        else if(choice==3)
        {
            printf("Existing program");
            break;
        }
        else
        {
            printf("Invalid Choice.\n");
        }
    }
}
