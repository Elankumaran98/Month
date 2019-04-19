#include <stdio.h>
int main()
{
    int st_date,days;
    int x,y,z;
     printf("Type this month days:");scanf("%d",&days);
    printf("Type this month starting day[Mon-1...Sun-7]:");scanf("%d",&st_date);
    printf("\t\t\tThis Month\n");
    printf("\t\t\t===========\n");
    printf("\tMon\tTue\tWed\tThu\tFri\tSat\tSun\n");

    for(x=1;x<3st_date;x++)
    {
        printf("\t");
    }
    y=st_date;
    for(z=1;z<=days;z++,y++)
    {
        if(y==8)
        {
            printf("\n");
            y=1;
        }
        printf("\t%d",z);
    }
}
