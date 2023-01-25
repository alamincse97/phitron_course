#include<stdio.h>

void shift_char(char s[1000], int N);

int main()
{
    int N;
    char s[1000];

    scanf("%s", &s);
    scanf("%d", &N);

    shift_char(s, N);

    return 0;
}

void shift_char(char s[1000], int N)
{
    int i=0;
    while(s[i] != '\0')
    {
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            int a = s[i] += N;

            if(a > 122)
            {
                int c = s[i] - 122;
                int d = 97 + c - 1;
                printf("%c", d);
            }
            else
            {
                printf("%c", a);
            }
        }
        i++;
    }
}
