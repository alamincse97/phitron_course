#include<stdio.h>
#include<string.h>

int main()
{
    char s[102];

    int i;

    fgets(s, sizeof(s), stdin);

    for(i=0; i<strlen(s) - 1; i++)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] += 32;
        }
        if(!(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i]=='o' || s[i] == 'u' || s[i] == 'y'))
        {
            // do nothing
            printf(".%c", s[i]);
        }
    }
    //printf("\n");

    return 0;
}
