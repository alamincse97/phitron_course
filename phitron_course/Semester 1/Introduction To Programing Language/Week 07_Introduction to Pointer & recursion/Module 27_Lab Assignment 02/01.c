#include<stdio.h>

void capita_small(char a[1000]);

int main()
{
    char x[1000];
    scanf("%s", x);

    capita_small(x);

    return 0;
}

void capita_small(char a[1000])
{
    int i=0;
    while(a[i] != '\0')
    {
        if(a[i] >= 'a' && a[i] <= 'z')
        {
            printf("%c", a[i] = a[i] - 32);
        }
        else if (a[i] >= 'A' && a[i] <= 'Z')
        {
            printf("%c", a[i] = a[i] + 32);
        }
        i++;
    }
}
