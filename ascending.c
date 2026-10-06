#include <stdio.h>
int main()
{
    int num1[5],i,j,temp;
    printf("enter any 5 numbers");
    for(i=0;i<5;i++)
    {
        scanf("%d",&num1[i]);
    }
    for(i=0;i<5-1;i++)
    {
        for(j=0;j<5-i-j;j++)
        {
            if(num1[j] > num1[j + 1]) 
            {
                 temp = num1[j];
                num1[j] = num1[j + 1];
                num1[j + 1] = temp;
            }
        }
    }
    printf("numbers in the ascending orders are\n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",num1[i]);
    }
}

            
        
    

        
    
    
    
    
