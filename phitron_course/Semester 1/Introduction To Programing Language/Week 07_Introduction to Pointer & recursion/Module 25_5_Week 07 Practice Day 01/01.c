#include<stdio.h>

int main()
{
    int t, k, count = 0, i;
    scanf("%d", &t);
    scanf("%d", &k);

    int n[100];

    while(t--){
        scanf("%d", &n);

        if(k != n[i])
            count = count + n[i];

    }
    printf("%d\n", count);
    return 0;
}
