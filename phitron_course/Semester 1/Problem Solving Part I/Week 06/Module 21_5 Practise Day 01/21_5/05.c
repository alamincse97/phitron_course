#include<stdio.h>

int a_s_m_d(int x, int y, char z);

int main()
{
    char sign;
    scanf("%c", &sign);

    int a, b;
    scanf("%d %d", &a, &b);

    int c = a_s_m_d(sign, a, b);

    printf("%d", c);

    return 0;
}

int a_s_m_d(int x, int y, char z)
{
    int num;
    if(a>b)
    {
        if(z == '+')
            num = a + b;
        else if(z == '-')
            num = a - b;
        else if(z == '*')
            num = a * b;
        else if(z == '/')
            num = a / b;
    }
    else
    {
        if(z == '+')
            num = a + b;
        else if(z == '-')
            num = b - a;
        else if(z == '*')
            num = a * b;
        else if(z == '/')
            num = b / a;
    }
    return num;
}
