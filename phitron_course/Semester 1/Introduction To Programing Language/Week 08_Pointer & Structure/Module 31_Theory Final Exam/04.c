#include <stdio.h>
#include <math.h>
void asecding_sort(char *s)
{
    int l = strlen(s);
    char temp;
    for (int i = 0; i < l - 1; i++)
    {
        for (int j = i + 1; j < l; j++)
        {
            if (s[i] > s[j])
            {
                temp = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}
int main()
{
    char s[50];
    scanf("%s", s);
    asecding_sort(&s);
    printf("%s", s);

    return 0;
}
