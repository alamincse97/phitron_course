#include <stdio.h>
int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    int a[N][M], b[N][M];

    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<M; j++)
        {
            printf("%d ", a[i][j]+b[i][j]);
        }
        printf("\n");
    }

    return 0;
}
