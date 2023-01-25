#include <stdio.h>

int main()
{
   int n, k, i;
   scanf("%d", &n);
   int r[n];

   for(i=1;i<=n;i++){
      scanf("%d ", &r[i]);
   }

   scanf("%d", &k);

   if(k > 0){
      for(i=k+1;i<=n;i++){
         printf("%d ", r[i]);
      }
      for(i=1;i<=k;i++){
         printf("%d ", r[i]);
      }
   }
   else if(k = 0){
      for(i=1;i<=n;i++){
         printf("%d ", r[i]);
      }
   }

   return 0;
}
