#include<stdio.h>

void love_digit_number(char n[1000]);

int main()
{
    char x[1000];
    scanf("%s", &x);

    love_digit_number(x);

    return 0;
}

void love_digit_number(char n[1000])
{
    int i=0, a=0, b=0, c=0;

    while(n[i] != '\0')
    {
        if(n[i] == '1')
            a=1;
        else if(n[i] == '7')
            b=1;
        else if(n[i] == '9')
            c=1;
        i++;
    }
    if(a==1 && b==1 && c==1)
        printf("Yes");
    else
        printf("No");
}
