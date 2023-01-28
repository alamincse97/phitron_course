#include<stdio.h>

int is_prime(int n);
void prime_numbers(int *nums, int n);
void average_even(int *nums, int n);

int main()
{
    int n;
    scanf("%d", &n);
    int nums[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }
    prime_numbers(nums, n);
    average_even(nums, n);
    return 0;
}
int is_prime(int n)
{
    for (int i = 2; i < n / 2; i++)
    {
        if (n % i != 0)
            continue;
        else
            return 0;
    }
    return 1;
}
void prime_numbers(int *nums, int n)
{

    int num_prime = 0;
    for (int i = 0; i < n; i++)
    {
        if (is_prime(nums[i]))
        {
            num_prime++;
        }
    }
    printf("Prime numbers: %d\n", num_prime);
}
void average_even(int *nums, int n)
{
    float sum = 0, even_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] % 2 == 0)
        {
            even_count++;
            sum += nums[i];
        }
    }
    printf("Average of all positive integers: %0.2f\n", sum/even_count);
}
