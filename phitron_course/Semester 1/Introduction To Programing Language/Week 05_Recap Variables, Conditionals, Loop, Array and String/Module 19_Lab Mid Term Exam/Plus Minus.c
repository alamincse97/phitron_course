#include <stdio.h>
#include <string.h>

int main()
{

    int n;
    scanf("%d", &n);
    char s[105];
    scanf("%s", s);
    int cnt = 1, maxx = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        if (s[i] == s[i + 1])
        {
            ++cnt;
        }
        else
        {
            if (maxx < cnt)
            {
                maxx = cnt;
            }
            cnt = 1;
        }
    }
    if (maxx < cnt)
    {
        maxx = cnt;
    }
    printf("%d\n", maxx);
    return 0;
}

