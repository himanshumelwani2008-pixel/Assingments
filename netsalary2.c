#include<stdio.h>
int main()
{
    int grosssalary,netsalary;
    printf("what is your gross salary?");
    scanf("%d",&grosssalary);
    if(grosssalary>10000)
    {
        netsalary=grosssalary+10*grosssalary/100 -3*grosssalary/100;
        printf("your netsalary is = %d",netsalary);
    }
    else if(grosssalary<10000 && grosssalary>5000)
    {
        netsalary=grosssalary + 7*grosssalary/100 -3*grosssalary/100;
        printf("your net salary is %d",netsalary);
    }
    else
    {
        printf("default");
    }
    return 0;
}