#include<stdio.h>

void marks(int n);

int main()
{
    int N;
    scanf("%d", &N);

    marks(N);

    return 0;
}

void marks(int n)
{
    if(n >= 80 && n <= 100)
        printf("A");
    else if(n >= 60 && n <= 79)
        printf("B");
    else if(n >= 40 && n <= 59)
        printf("C");
    else if(n >= 0 && n <= 39)
        printf("F");
}
