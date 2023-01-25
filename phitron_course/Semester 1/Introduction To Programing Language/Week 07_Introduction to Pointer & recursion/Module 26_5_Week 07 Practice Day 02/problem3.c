#include <stdio.h>

sort_array(int n, int ara[]);
int kth_largest(int n ,int k, int ara[]);
int kth_smallest(int k, int ara[]);

int main()
{
    int n, k;
    printf("Enter the array size = ");
    scanf("%d", &n);
    int ara[n];
    
    printf("Enter the elements of the array = ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }

    printf("Enter the value of k to know the kth smallest and largest elemnts = ");
    scanf("%d", &k);
    sort_array(n, ara);
    
    printf("\n");
    printf("%dth smallest element is = %d\n", k, kth_largest(n,k,ara ));
    printf("%dth smallest element is = %d\n", k, kth_smallest(k, ara));
}

sort_array(int n, int ara[])
{
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (ara[j] > ara[j + 1])
            {
                temp = ara[j + 1];
                ara[j + 1] = ara[j];
                ara[j] = temp;
            }
        }
    }
}
int kth_smallest(int k, int ara[])
{

    return ara[k - 1];
}
int kth_largest(int n ,int k, int ara[])
{
    return ara[n - k];
}