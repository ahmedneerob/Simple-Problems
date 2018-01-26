#include <stdio.h>

long fact(int b);
int main ()
{
    int i,j,row;
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        for(j=row-1;j>=i;j--)
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {
            printf(" %d  ",(fact(i-1)/((fact(i-j))*fact(j-1))));
        }
        printf("\n");
    }
}
long fact(int b)
{
    int i;
    long f=1;
    for (i=1;i<=b;i++)
        {f=f*i;}
    return(f);
}
