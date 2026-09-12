#include<stdio.h>
int main()
{
    int sub1,sub2,sub3,total,average;
    printf("what is your marks for subject1:\n");
    scanf("%d",&sub1);
    printf("what is your marks for subject 2\n");
    scanf("%d",&sub2);
    printf("what is your marks for subject 3\n");
    scanf("%d",&sub3);
    total=sub1+sub2+sub3;
    average=(sub1+sub2+sub3)/3;
    printf("your total marks are %d\n",total);
    printf("your average marks are %d\n",average);
    if(average>=70)
    {
        printf("distinction");
    }
    else if (average>=60)
    {
        printf("average");
    }
    else if (average >=40)
    {
        printf("needs to improve");
    }
    else
    {
        printf("fail");
    }
}