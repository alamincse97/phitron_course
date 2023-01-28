// gcd and lcm

#include<stdio.h>

// gcd
int gcd(int m, int n)
{
    int i;
    for(i=m; i>=1; i--)
    {
        if(m%i == 0 && n%i==0)
            return i;
    }
}
//lcm

int lcm(int m, int n)
{
    //int i;
    //for(i=m;; i++)
    //{
      //  if(i%m == 0 && i%n==0)
        //    return i;
    //}

    return (m*n) / gcd(m, n);

}


int main()
{
    int a,b; // a = 7, b = 14, ans = 7;
    scanf("%d %d", &a, &b);

    int ans = gcd(a, b);
    int ans2 = lcm(a, b);

    printf("GCD is %d\n", ans);
    printf("LCM is %d\n", ans2);

    return 0;
}
/*
12 18
GCD is 6
LCM is 36
*/
