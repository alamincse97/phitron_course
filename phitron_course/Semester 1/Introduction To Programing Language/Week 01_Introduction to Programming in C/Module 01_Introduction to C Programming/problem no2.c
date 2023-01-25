#include<stdio.h>

int main()
{
    int n, i;
    printf("Enter an integer: ");
    scanf("%d", &n);

    if(n >= 0){
        for(i=1; i<=n; i++){
            printf("%d ", i);
        }
    }
    else
    for(i=1; i>=n; i--){
        printf("%d ", i);
    }
    return 0;
}
