// count an string element sequential value and check if the count is power of 2 or not.
#include <stdio.h>
#include <string.h>

int str_cost(char str[1000]);
int checkpowof_2(int x);

int main()
{
    char str[1000];
    printf("Enter the string = ");
    scanf("%s", str);

    int ret = checkpowof_2(str_cost(str));

    if (ret == 0)
    {
        printf("No\n");
    }
    else if (ret > 0)
    {
        printf("Yes\n2^%d", ret);
    }
}

int str_cost(char str[1000])
{
    int count = 0;
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        count += (str[i] - 'a') + 1;
    }
    return count;
}

int checkpowof_2(int x)
{
    int count = 0;

    while (x != 1)
    {
        if (x % 2 != 0)
        {
            return 0;
        }
        count++;
        x = x / 2;
    }
    return count;
}