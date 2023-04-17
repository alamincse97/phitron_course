#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int sum_of_digit(int n)
{
    if (n == 0)
    {
        return n;
    }
    return (n % 10 + sum_of_digit(n / 10));
}

int main()
{
    optimize();
    int n;
    cin >> n;

    int sum = sum_of_digit(n);
    cout << sum << "\n";

    return 0;
}

/*
Sample Input -

     234

Sample Output -

     9
*/
