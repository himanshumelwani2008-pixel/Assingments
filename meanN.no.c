#include <stdio.h>
int main()
{
    int i,n,num1;
    float mean,sum=0;
    printf("how many numbers of mean you want to take off\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf(" choose %d number\n",i);
        scanf("%d",&num1);
        sum=sum+num1;
    }
    mean=sum/n;
    printf("mean of values is %f\n",mean);
    printf("sum of all value is %f\n",sum);
    return 0;
}