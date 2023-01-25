#include <stdio.h>
#include <string.h>

void swp(char *x, char *y);
void decending_order(char a[100],int len);

int main()
{
    char s[1000];
    scanf("%s", &s);

    int n = strlen(s);

    decending_order(s, n);

    for(int i=0; i<n; i++)
        printf("%c", s[i]);

    return 0;
}

void decending_order(char a[100],int len)
{
    int i,j;
    for(i=0; i<len-1; i++)
    {
        for(j=i; j<len; j++)
        {
            if(a[i] < a[j])
                swp(&a[i], &a[j]);
        }
    }
}

void swp(char *x, char *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
