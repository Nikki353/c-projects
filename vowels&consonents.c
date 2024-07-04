#include<stdio.h>
void main()
{
    char ch;
    printf("\n ENTER YOUR LETTER : ");
    scanf("%c",&ch);
    if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U')
    {
        printf("\n THE GIVEN LETTER IS A VOWEL : %c ",ch);
    }
    else
    {
        printf("\n THE GIVEN LETTER IS A CONSONENT : %c ",ch);
    }
    getch();
}
