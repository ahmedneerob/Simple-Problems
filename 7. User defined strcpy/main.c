#include<stdio.h>

void cpystr(char *p, char *q);

main()
{
    char s[100],t[100];
    printf("Enter a string\t");
    gets(s);
    cpystr(t,s);
    printf("Copied string is \t%s\n", t);
    return 0;
}

void cpystr(char *t, char *s)
{
    while(*s)
    {
        *t=*s;
        s++;
        t++;
    }
    *t='\0';
}
