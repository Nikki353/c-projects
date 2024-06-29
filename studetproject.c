#include<stdio.h>
#include<stdlib.h>
void main()
{
    int tel,hin,eng,mat,sci,soc,totl,avg;
    system("cls");
    printf("\n enter tel marks : ");
    scanf("%d",&tel);
    printf("\n enter hin marks : ");
    scanf("%d",&hin);
    printf("\n enter eng mark : ");
    scanf("%d",&eng);
    printf("\n enter mat marks : ");
    scanf("%d",&mat);
    printf("\n enter sci marks : ");
    scanf("%d",&sci);
    printf("\n enter soc marks : ");
    scanf("%d",&soc);
    totl=tel+hin+eng+mat+sci+soc;
    printf("\n total marks %d \n",totl);
    avg=totl/6;
    printf("\n average marks %d \n",avg);


    if(tel>hin && tel>sci && tel>eng && tel>mat && tel>soc)
        printf("\n tel is the highest %d \n",tel);
    else
        if(hin>tel && hin>eng && hin>mat && hin>sci && hin>soc)
        printf("\n hin is the highest %d \n",hin);
        else
            if(eng>tel && eng>hin && eng>mat && eng>soc && eng>sci)
            printf("\n eng is the hightest %d \n",eng);
        else
            if(mat>tel && mat>hin && mat>eng && mat>soc && mat>sci)
            printf("\n mat is the highest %d \n",mat);
        else
            if(soc>tel && soc>hin && soc>eng && soc>mat && soc>sci)
            printf("\n soc is the highest %d \n",soc);
        else
            if(sci>tel && sci>hin && sci>eng && sci>mat && sci>soc)
            printf("\n sci is the highest %d \n",sci);


        if(tel<hin && tel<sci && tel<eng && tel<mat && tel<soc)
        printf("\n tel is the lowest %d \n",tel);
    else
        if(hin<tel && hin<eng && hin<mat && hin<sci && hin<soc)
        printf("\n hin is the lowest %d \n",hin);
        else
            if(eng<tel && eng<hin && eng<mat && eng<soc && eng<sci)
            printf("\n eng is the lowest %d \n",eng);
        else
            if(mat<tel && mat<hin && mat<eng && mat<soc && mat<sci)
            printf("\n mat is the lowest %d \n",mat);
        else
            if(soc<tel && soc<hin && soc<eng && soc<mat && soc<sci)
            printf("\n soc is the lowest %d \n",soc);
        else
            if(sci<tel && sci<hin && sci<eng && sci<mat && sci<soc)
            printf("\n sci is the lowest %d \n",sci);


            if(tel>avg)
                printf("\n passed in tel",tel);
            else
                if(hin>avg)
                printf("\n passed in hin",hin);
            else
                if(mat>avg)
                printf("\n passed in mat",mat);
            else
                if(eng>avg)
                printf("\n passed in eng",eng);
            else
                if(soc>avg)
                printf("\n passed in soc",soc);
            else
                if(sci>avg)
                printf("\n passed in sci",sci);


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
                getch();
                return 0;

}
