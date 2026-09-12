#include <stdio.h>
int main()
{
    int sub1,sub2,sub3;
    printf("what is your marks of your subject1\n");
    scanf("%d",&sub1);
    printf("what is your marks of your subject 2\n");
    scanf("%d",&sub2);
    printf("what is your marks of subject 3\n");
    scanf("%d",&sub3);
    printf("your total mark of all three subjects are=%d\n",sub1+sub2+sub3);
    printf("your age of all three subjects are = %d",(sub1+sub2+sub3)/3);
    return 0;
}