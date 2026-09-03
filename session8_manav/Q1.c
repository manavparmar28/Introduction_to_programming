#include<stdio.h>
#include<ctype.h>

    void getUserInitials(char name[],char initials[]){
        initials[0]= toupper(name[0]);

        for(int i=0;name[i]!='\0';i++)
        {
            if(name[i] == ' ')
            {
                initials[1]= toupper(name[i+1]);
                break;
            }
        }
    initials[2]='\0';
}

int main(){
    char name[20],initials[3];

    printf("Enter your fav cricketer name: ");
    scanf("%[^\n]",&name);

    getUserInitials(name,initials);

    printf("Initials: %s",initials);
}
