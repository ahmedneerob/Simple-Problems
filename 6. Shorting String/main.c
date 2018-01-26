#include <stdio.h>
#include <string.h>

int main()
{
   char s[1000];
   gets(s);
   char t;
   int i,j;
   int n=strlen(s);
   printf("\nString before sorting\t%s\n",s);
   for (i = 0; i < n-1; i++)
   {
      for (j = i+1; j < n; j++)
      {
         if (s[i]>s[j])
         {
            t=s[i];
            s[i]=s[j];
            s[j]=t;
         }
      }
   }
   printf("\nString after sorting\t%s\n",s);
   return 0;
}
