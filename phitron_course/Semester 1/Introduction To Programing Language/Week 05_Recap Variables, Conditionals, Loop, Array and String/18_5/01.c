#include<stdio.h>

int main()
{
    int n, i;
    scanf("%d", &n);

    if(0 < n)
    {
        for(i=n; i>= -n; i--)
        {
            printf("%d ", i);
        }
    }
    else
    {
        for(i=n; i<=-n; i++)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
