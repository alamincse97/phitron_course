#include<stdio.h>

int main()
{
    int n, i;
    printf("Enter an positive integer: ");
    scanf("%d", &n);

    for(i=2; i<=n; i=i+2){
        printf("%d ", i);
    }
    return 0;
}
