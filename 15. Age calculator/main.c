#include <stdio.h>

struct age
{
    int d;
    int m;
    int y;
};
int main()
{
    int i;
    struct age p[3];
        printf("Enter date of birth\n");
        printf("Enter day\t");
        scanf("%d",&p[0].d);
        printf("Enter month(integer)\t");
        scanf("%d",&p[0].m);
        printf("Enter year\t");
        scanf("%d",&p[0].y);
        printf("Enter date of today\n");
        printf("Enter day\t");
        scanf("%d",&p[1].d);
        printf("Enter month(integer)\t");
        scanf("%d",&p[1].m);
        printf("Enter year\t");
        scanf("%d",&p[1].y);
    p[2].d=p[1].d-p[0].d;
    if(p[2].d<0)
    {
        p[2].d=p[2].d+30;
        p[0].m=p[0].m+1;
    }
    p[2].m=p[1].m-p[0].m;
    if(p[2].m<0)
    {
        p[2].m=p[2].m+12;
        p[0].y=p[0].y+1;
    }
    p[2].y=p[1].y-p[0].y;
    printf("\nYour age \t = %d years %d months %d days\n",p[2].y,p[2].m,p[2].d);
    return 0;
}
