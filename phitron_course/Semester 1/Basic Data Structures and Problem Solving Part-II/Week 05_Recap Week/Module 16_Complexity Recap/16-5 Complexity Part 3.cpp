/*
#include<bits/stdc++.h>

using namespace std;

int main()
{
    // Time Complexity:- O(nlogn)
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j=j+i)
        {
            cout << i << " " << j << "\n";
        }
    }
    return 0;
}
*/

#include<bits/stdc++.h>

using namespace std;

// O(2^n)
int fib(int n)
{
    if(n<=1)
        return n; // O(1)
    return fib(n-1) + fib(n-2); // O()
}
int main()
{
    int n;
    cin >> n;
    cout << fib(n) << "\n";
    return 0;
}
