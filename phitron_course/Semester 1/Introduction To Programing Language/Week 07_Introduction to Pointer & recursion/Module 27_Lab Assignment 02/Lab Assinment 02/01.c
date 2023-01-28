#include<stdio.h>

void calculate_sum(int n);

int main()
{
    int N;
    scanf("%d", &N);

    calculate_sum(N);

    return 0;
}

void calculate_sum(int n)
{
    int i, sum = 0, flag = 0;

    for(i=1; i<=n; i++)
    {
        if(flag % 2 == 0){
            sum = sum + i;
        }
        else
        {
            sum = sum - i;
        }
        if(i % 3 == 0)
        {
            flag++;
        }
    }
    printf("%d ", sum);
}
