#include <stdio.h>

int main()
{
    FILE *p;
    char s[1000];
    p=fopen("E:\\t1.txt","r");
    fgets(s,1000,p);
    p=fclose(p);
    p=fopen("E:\\t2.txt","w");
    fprintf(p,"%s",s);
    return 0;
}
