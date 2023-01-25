#include<stdio.h>


int p_n(int n);

int main()
{
    int n;
    printf("Enter an integer: \n");
    scanf("%d", &n);

    p_n(n);

    return 0;
}

int p_n(int a)
{
    int i;
    if(0<a)
    {
        for( i=a; i>= -a; i--)
        {
            printf("%d ", i);
        }
    }
    else
    {
        for(int i=a; i<= -a; i++)
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}
