#include <stdio.h>

int main()
{
    char dis[1];
    int i,ar[500],n,a,b;
    printf("How many elements in your array\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("\nYour array\t");
    for(i=0;i<n;i++)
    {
        printf("%d ",ar[i]);
    }
    printf("\n");
    jump:
    printf("\nWant to edit? Enter y to edit and n to exit ");
    scanf("%s",&dis);
    if(dis[0]=='y' || dis[0]=='Y')
    {
        printf("enter element\t");
        scanf("%d",&a);
        printf("enter position\t");
        scanf("%d",&b);
        ar[b-1]=a;
        printf("\n");
        printf("\nYour array\t");
        for(i=0;i<n;i++)
        {
            printf("%d ",ar[i]);
        }
        goto jump;
    }
    else
    {
    	printf("\nFinal array\t");
        for(i=0;i<n;i++)
        {
            printf("%d ",ar[i]);
        }
    }
    return 0;
}
