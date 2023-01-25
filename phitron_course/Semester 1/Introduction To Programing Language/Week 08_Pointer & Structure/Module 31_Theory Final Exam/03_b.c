#include<stdio.h>

void swap(int x, int y)
{
    int temp;

    temp = x;
    x = y;
    y = temp;

    return;
}

int main()
{
    int x = 20;
    int y = 30;

    printf("Values before swap: x = %d, y = %d\n", x, y);
    swap(x, y);
    printf("Values after swap: x = %d, y = %d", x, y);

    return 0;
}

