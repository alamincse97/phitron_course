#include <stdio.h>

int is_prime(int n)
{
   int i;
   if(n==1) return 1;
   for(i=2; i<=n/2; i++)
   {
      if(n%i == 0)
      {
         return 0;
      }
   }
   return 1;
}

int main()
{
   int t, i, j;
   scanf("%d", &t);

   while(t--)
   {
      int l, r;
      scanf("%d %d", &l, &r);
      for(i=l; i<=r; i++)
      {
         is_prime(i) && printf("%d ", i);
      }
      printf("\n");
   }
   return 0;
}
