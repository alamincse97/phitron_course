#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int n;
        scanf("%d", &n);
        int i=0;
        while(n>0)
        {
            printf("%c", 64 + n%10);
            i++;
            n /= 10;
        }
        printf("\n");
    }
    return 0;
}
