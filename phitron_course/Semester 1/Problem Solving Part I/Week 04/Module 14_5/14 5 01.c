#include <stdio.h>
#include <string.h>
int main()
{
    char str[101];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf(" %s", str);
        puts(str);

        strcat(str);
    }
    printf("%c", str);
}
