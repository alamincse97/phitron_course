#include<stdio.h>

void consecutive_even_numbers(int n);

int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int N;
        scanf("%d", &N);

        consecutive_even_numbers(N);
    }
    return 0;
}

void consecutive_even_numbers(int n)
{
    int i, sum;
    for(i=2; i<=n/3; i=i+2)
    {
        sum = i + i + 2 + i + 4 + i + 6;
        if(sum == n)
        {
            printf("%d %d %d %d\n", i, i+2, i+4, i+6);
            break;
        }
    }
}
