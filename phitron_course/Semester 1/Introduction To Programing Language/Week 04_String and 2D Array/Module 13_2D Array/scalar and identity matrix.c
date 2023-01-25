#include<stdio.h>

int main()
{
    int row, col;

    scanf("%d %d", &row, &col);

    int a[row][col];

    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    if(row == col)
    {
        int ans=1, x=a[0][0];
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                if(i==j)
                {
                    // Special checking for diagonal
                    if(a[i][j] != x)
                    {
                        ans = 0;
                    }
                    continue;
                }
                if(a[i][j] != 0)
                {
                    ans=0;
                }
            }
        }
        if(ans==1)
        {
            printf("Scalar\n");
        }
        else
        {
            printf("Not Scalar\n");
        }
    }
    else
    {
        printf("Not Scalar\n");
    }
}

