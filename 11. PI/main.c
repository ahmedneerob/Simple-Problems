#include <stdio.h>
#include<math.h>

int main()
{
    long int pi,n,k;
    double sum=0;
    printf("Pi value using series\nEnter series term n=\t");
    scanf("%ld",&n);
    for(k=0;k<=n;k++)
    {
        sum=sum+4*((pow(-1,k))/(2*k+1));
    }
    printf("\nValue of Pi = %lf\n",sum);
    return 0;
}
