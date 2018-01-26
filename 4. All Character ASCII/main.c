#include <stdio.h>

int main()
{
    int i;
    char c1;
    c1='A';
    for(i=0;i<26;i++)
    {
        printf("%c = %d\n",c1+i,c1+i);
    }
    c1='a';
    for(i=0;i<26;i++)
    {
        printf("%c = %d\n",c1+i,c1+i);
    }
    return 0;
}
