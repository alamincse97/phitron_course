// sorting an array and find the count of  different values from a particular array  element.
#include <stdio.h>

int arra_funct(int x,int ara[x],int k)
{
  int count=0;
  for (int i = 0; i <x; i++)
  {
    if ( ara[i]>k || ara[i]<k)
    {
      count++;
    }
  }
  return count;
}
int main()
{
  int n;
  printf("Enter the array size = ");
  scanf("%d",&n);

  int ara[n];
  printf("Enter the elements of the array = ");
  for (int i = 0; i < n; i++)
  {
    scanf("%d",&ara [i]);
  }
  int k;
  printf("Enter the value of k = ");
  scanf("%d",&k);
  printf("The total different value from %d is = %d",k,arra_funct(n,ara,k));
}
