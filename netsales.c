#include <stdio.h>
int main()
{
    int netsales,grosssales;
    printf("what is your net sales this year?\n");
    scanf("%d",&grosssales);
    netsales=grosssales-10*grosssales/100;
    printf("%d",netsales);
    return 0;

}