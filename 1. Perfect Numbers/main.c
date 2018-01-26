#include <stdio.h>

int main()
{
    int i,num,sum=0;
    printf("enter a number\t");
    scanf("%d",&num);
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==num)
    {
        printf("number is perfect\n");
    }
    else
    {
        printf("not perfect\n");
    }
}
