#include <stdio.h>
int main()
{
    int grosssalary,netsalary;
    printf("what is your gross salary\n");
    scanf("%d",&grosssalary);
    netsalary=grosssalary+10*grosssalary/100-3*grosssalary/100;
    printf(" your net salary is = %d",netsalary);
    
    
}