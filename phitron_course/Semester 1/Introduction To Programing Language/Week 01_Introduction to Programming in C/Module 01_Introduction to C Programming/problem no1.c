#include<stdio.h>

int main()
{
    int n, i;
    printf("Enter an positive integer: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        printf("%d ", i);
    }
    return 0;
}
