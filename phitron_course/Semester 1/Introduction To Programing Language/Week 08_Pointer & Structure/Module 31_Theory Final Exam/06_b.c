#include<stdio.h>

int get()
{
    int n=10, m=10;
    return m + n;
}
void main()
{
    int c;
    c = get();
    printf("C=%d", c);
}
