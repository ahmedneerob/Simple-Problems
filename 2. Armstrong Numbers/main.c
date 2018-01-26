#include <stdio.h>
#include <math.h>

int main()
{
    int c,d,i=0,sum=0,num,r;
    printf("Enter a number\t");
    scanf("%d",&num);
    c=num;
    d=num;
    while(c>0)
    {
        c=c/10;
        i++;
    }
    while(num>0)
    {
        r=num%10;
        sum=sum+pow(r,i);
        num=num/10;
    }
    if(sum!=d)
    {
        printf("Not armstrong number\n");
    }
    else
    {
        printf("Armstrong number\n");
    }
    return 0;
}
