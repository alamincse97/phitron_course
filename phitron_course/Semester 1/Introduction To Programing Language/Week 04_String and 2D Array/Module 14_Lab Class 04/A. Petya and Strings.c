#include<stdio.h>
#include<string.h>

int main()
{
    char s[102],t[102];
    int i;

    fgets(s, sizeof(s), stdin);
    fgets(t, sizeof(t), stdin);

    int len = strlen(s) - 1;

    for(i=0; i<len; i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] += 32;
        if(t[i] >= 'A' && t[i] <= 'Z')
            t[i] += 32;
    }
    int same = 1;
    for(i=0; i<len; i++)
    {
        // s[i] and t[i]
        if(s[i] < t[i])
        {
            same = 0;
            printf("-1\n");
            break;
        }
        else if(s[i] > t[i])
        {
            same = 0;
            printf("1\n");
            break;
        }
    }
    if(same == 1)
    {
        printf("0\n");
    }
    return 0;
}
