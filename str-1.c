#include<stdio.h>
void main()
{
    char greetings[10]={'H','E','L','L','O','!','\0'};
    printf("\n %s ",greetings);
    printf("\n --------------------------------------------------------------------------------------------------------------------");
    printf("\n first character : %c ",greetings[0]);
    printf("\n last character : %c ",greetings[4]);
    printf("\n --------------------------------------------------------------------------------------------------------------------");
    char name[33];
    printf("\n enter any name : ");
    scanf("%s",name);
    printf("\n Hello %s! ",name);
    printf("\n --------------------------------------------------------------------------------------------------------------------");
    char str1[10]="its",str2[10]="me!!!",str3[10];
    strcpy(str3,str1);
    strcat(str3," ");
    strcat(str3,str2);
    printf("\n GREETINGS : %s",str3);
    printf("\n --------------------------------------------------------------------------------------------------------------------");
    if(strcmp(str1,str2)==0)
    {
        printf("\n str1 and str2 are equal ");
    }
    else
    {
        printf("\n str1 and str2 are not equal ");
    }
    getch();
}

