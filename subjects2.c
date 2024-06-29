#include<stdio.h>
#include<stdlib.h>
void main()
{
    system("cls");
    int tel,hin,eng,mat,sci,soc;
    int totalmarks;
    int highestmarks,lowestmarks;
    float averagemarks;
    printf("\n enter tel marks : ");
    scanf("%d",&tel);
    printf("\n enter hin marks : ");
    scanf("%d",&hin);
    printf("\n enter eng marks : ");
    scanf("%d",&eng);
    printf("\n enter mat marks : ");
    scanf("%d",&mat);
    printf("\n enter soc marks : ");
    scanf("%d",&soc);
    printf("\n enter sci marks : ");
    scanf("%d",&sci);
    totalmarks=tel+hin+eng+mat+sci+soc;
    averagemarks=totalmarks/6.0;
    highestmarks=tel;
    lowestmarks=tel;

    if(hin>highestmarks)
        highestmarks=hin;
    if(eng>highestmarks)
        highestmarks=eng;
    if(mat>highestmarks)
        highestmarks=mat;
    if(sci>highestmarks)
        highestmarks=sci;
    if(soc>highestmarks)
        highestmarks=soc;


    if(hin<highestmarks)
        lowestmarks=hin;
    if(eng<highestmarks)
        lowestmarks=eng;
    if(mat<highestmarks)
        lowestmarks=mat;
    if(sci<highestmarks)
        lowestmarks=sci;
    if(soc<highestmarks)
        lowestmarks=soc;

        if(tel<35)
                printf("\n\n failed in tel \n",tel);
            else
                if(hin<35)
                printf("\n\n failed in hin \n",hin);
            else
                if(mat<35)
                printf("\n\n failed in mat \n",mat);
            else
                if(eng<35)
                printf("\n\n failed in eng \n",eng);
            else
                if(soc<35)
                printf("\n\n failed in soc \n",soc);
            else
                if(sci<35)
                printf("\n\n failed in sci \n",sci);


        printf("\n totalmarks: %d \n ",totalmarks);
        printf("\n averagemarks: %f \n ",averagemarks);
        printf("\n highestmarks: %d \n ",highestmarks);
        printf("\n lowestmarks: %d \n ",lowestmarks);
        getch();
        return 0;



}
