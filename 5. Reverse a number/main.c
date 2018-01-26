#include <stdio.h>
int main()
{
    int n,rn=0,r;

    printf("Enter an integer less then 5 digits: ");
    scanf("%d",&n);

    while(n!=0)
    {
        r= n%10;
        rn=rn*10+r;
        n/=10;
    }
    printf("Reversed Number = %d\n",rn);
    return 0;
}
