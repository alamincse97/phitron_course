// Array with sum

#include<stdio.h>

int add_them(int n, int nums[])
{
    int summ = 0;
    int i;
    for(i=0; i<n; i++)
    {
        summ += nums[i];
    }
    return summ;
}

int main()
{
    int ara[] = {13, 74, 174, 234, 4, 3, 6, 345, 54};

    int summ = add_them(9, ara);
    printf("The Sum is %d\n", summ);

    return 0;
}
