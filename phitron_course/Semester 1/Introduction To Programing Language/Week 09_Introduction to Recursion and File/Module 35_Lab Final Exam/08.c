#include <stdio.h>

int main()
{
   int a[27] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
   int n;
   scanf("%d", &n);

   char s[1000];
   scanf("%s", &s);

   int count=0, i=0;
   while(s[i] != '\0')
   {
      if(s[i]>='a' && s[i]<='z')
      {
         a[s[i] - 97] += 1;
      }

      i++;
   }
   for(i=0; i<27; i++)
   {
      if(a[i] == 1)
         count++;
   }

   printf("%d", count);

   return 0;
}
