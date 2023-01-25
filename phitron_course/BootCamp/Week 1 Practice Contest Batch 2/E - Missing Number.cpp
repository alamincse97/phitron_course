/*
Md.Al-Amin Hossian
Mail: alamin.cse97@gmail.com

Algorithm:
1. get test case
2. start i=0; and end i<= t-1; run loop and get input
3. sum = sum + n;
4. print = (n*(n+1))/2 - sum

*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n, input, sum = 0;;
    cin >> n;

    for(int i=0; i<n-1; i++)
    {
        cin >> input;
        sum += input;
    }
    cout << (n*(n+1))/2 - sum;

    return 0;
}
