#include <stdio.h>

void broken_keyboard(char s[]);

int main()
{
    char s[1000];
    scanf("%s", &s);

    broken_keyboard(s);
    return 0;
}

void broken_keyboard(char s[])
{
    int i=0;
    while(s[i] != '\0')
    {
        int idx = i+1;
        if(idx%2==0)
            printf("%c%c", s[i], s[i]);
        else
            printf("%c", s[i]);

        i++;
    }
}
