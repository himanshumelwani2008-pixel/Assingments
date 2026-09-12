
#include<stdio.h>
int main()
{
    int grosssales,netsales;
    printf("what is your gross sales?");
    scanf("%d",&grosssales);
    if(grosssales>20000)
    {
        netsales=grosssales-15*grosssales/100;
        printf("your netsales is = %d",netsales);
    }
    else if(grosssales<20000 && grosssales>10000)
    {
        netsales=grosssales -10*grosssales/100;
        printf("your net sales is %d",netsales);
    }
    else if(grosssales<10000)
    {
        netsales=grosssales -5*grosssales/100;
        printf("%d",netsales);
    }
    return 0;
}