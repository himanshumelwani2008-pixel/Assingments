#include <string.h>
#include <stdio.h>
int main()
{
    int num1,boys=0,girls=0;
    char name[30],sexcode[5];
    for(num1=1;num1<=2;num1++)
    {
        printf("what is your name\n");
        scanf("%29s",&name);
        printf("what is your sex:boy/girl\n");
        scanf("%5s",&sexcode);
        if(strcmp(sexcode,"boy")==0)
        {
            boys++;
        }
        else
        {
            girls++;
        }
    }
    printf("no. of boys are %d\n ",boys);
    printf("no.of girls are %d",girls);

    return 0;
}