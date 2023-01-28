/*
    Md.Al-Amin Hossian
    mail: alamin.cse97@gmail.com
*/
#include<iostream>
#include<stdio.h>

using namespace std;

void weird_algorithm(long long int n);

int main()
{
    long long int n;
    scanf("%lld", &n);
    printf("%lld ", n);

    weird_algorithm(n);

    return 0;
}

void weird_algorithm(long long int n)
{
    while(n > 1)
    {
        if(n%2 == 0)
        {
            n = n/2;
        }
        else
        {
            n = (n*3)+1;
        }
        printf("%lld ", n);
    }
    printf("\n");
}
