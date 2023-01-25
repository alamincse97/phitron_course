#include<stdio.h>

void even_odd(int n, int k);

int main()
{
    int N, K;
    scanf("%d%d", &N, &K);

    even_odd(N, K);

    return 0;
}

void even_odd(int n, int k)
{
    int i=1, index=0;
    int a[n];

    for(i=1; i<=n; i++)
    {
        if(i%2 == 0)
        {
            a[index] = i;
            printf("%d ", i);
            index++;
        }
    }
    for(i=1; i<=n; i++)
    {
        if(i%2 == 1)
        {
            a[index] = i;
            printf("%d ", i);
            index++;
        }
    }
    printf("\nThe %dth element in this sequence is %d.", k, a[k-1]);
}
