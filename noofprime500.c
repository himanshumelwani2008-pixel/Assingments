#include <stdio.h>

int main()
{
    int num1, num2, count,primeno=0;

    for (num1 = 1; num1 <= 500; num1++)
    {
        count = 0; // Reset count for every number

        for (num2 = 1; num2 <= num1; num2++)
        {
            
            if (num1 % num2 == 0)
            {
                count++;
            }
        }

        if (count == 2)
        {
            printf("%d\n", num1);
            primeno++;
        }
    } 
    printf(" the number of prime number between 1 to 500 are %d\n",primeno);

    return  0;
}