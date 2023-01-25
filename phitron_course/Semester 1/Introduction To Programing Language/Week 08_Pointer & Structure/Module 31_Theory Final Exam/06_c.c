#include<stdio.h>

void get(int c)
{
    printf("C=%d", c);
}
int main()
{
    int a = 10, b = 10, c;
    c = a + b;
    get(c);

    return 0;
}
