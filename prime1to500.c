#include <stdio.h>
int main()
{
    int num1,num2,count;
    for (num1=1;num1<=500;num1++)
    {
        count=0;
        for (num2=1;num2<=num1;num2++)
        {
            if (num1%num2==0)
            {
                count++;
            }

        }
    
    if (count==2)
    {
        printf("%d\n",num1);
    }
}

    return 0;

}