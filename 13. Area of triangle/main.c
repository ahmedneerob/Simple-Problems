#include<stdio.h>
#include<math.h>

int main()
{
    int i,dis;
    float s,x[3],y[3],a[3],p[3],area;
    printf("coordinates or side lengths? enter 1 for coordinates or 2 for sidelengths\n");
    scanf("%d",&dis);
    if(dis==1)
    {
        for(i=0;i<3;i++)
        {
            printf("point no. %d (x,y) = ",i+1);
            scanf("%f %f",&x[i],&y[i]);
        }
        p[0]=(x[0]-x[1])*(x[0]-x[1])+(y[0]-y[1])*(y[0]-y[1]);
        p[1]=(x[1]-x[2])*(x[1]-x[2])+(y[1]-y[2])*(y[1]-y[2]);
        p[2]=(x[2]-x[0])*(x[2]-x[0])+(y[2]-y[0])*(y[2]-y[0]);
        a[0]=sqrt(p[0]);
        a[1]=sqrt(p[1]);
        a[2]=sqrt(p[2]);
        s=(a[0]+a[1]+a[2])/2;
        area=sqrt(s*(s-a[0])*(s-a[1])*(s-a[2]));
        printf("\nArea of tringle is %.2f square unit\n",area);
        for(i=0;i<3;i++)
        {
            printf("\n%.2f\n",a[i]);
        }
        if(p[0]==p[1]+p[2] || p[1]==p[2]+p[0] || p[2]==p[1]+p[0])
        {
            printf("\nThis is a right angle triangle\n");
        }
        else
        {
            printf("\nThis is not a right angle triangle\n");
        }
    }
    else
    {
        printf("Side lengths of the triangle are \t");
        for(i=0;i<3;i++)
        {
            scanf("%f",&a[i]);
        }
        s=(a[0]+a[1]+a[2])/2;
        area=sqrt(s*(s-a[0])*(s-a[1])*(s-a[2]));
        printf("\nArea of tringle is %.2f square unit\n",area);
        if(a[0]*a[0]==a[1]*a[1]+a[2]*a[2] || a[1]*a[1]==a[2]*a[2]+a[0]*a[0] || a[2]*a[2]==a[0]*a[0]+a[1]*a[1])
        {
            printf("\nThis is a right angle triangle\n");
        }
        else
        {
            printf("\nThis is not a right angle triangle\n");
        }
    }
    return 0;
}
