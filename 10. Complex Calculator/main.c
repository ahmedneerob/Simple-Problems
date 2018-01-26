#include <stdio.h>

int main()
{
    int i,dis,n;
    float a[100],b[100],sum1=0,sum2=0;
    printf("For adding enter 1\tFor subtracting enter 2\n");
    scanf("%d",&dis);
    if(dis==1)
    {
        printf("How many complex numbers ?\t");
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            printf("real part of complex number %d\t\t",i+1);
            scanf("%f",&a[i]);
            printf("imaginary part of complex number %d\t",i+1);
            scanf("%f",&b[i]);
            sum1=sum1+a[i];
            sum2=sum2+b[i];
        }
        printf("\nAfter adding result :\t%.2f%.2fi\n",sum1,sum2);
    }
    else
    {
        for(i=0;i<2;i++)
        {
            printf("real part of complex number %d\t\t",i+1);
            scanf("%f",&a[i]);
            printf("imaginary part of complex number %d\t",i+1);
            scanf("%f",&b[i]);
        }
        sum1=a[0]-a[1];
        sum2=b[0]-b[1];
        printf("\nAfter adding result :\t%.2f%.2fi\n",sum1,sum2);
    }
    return 0;
}
