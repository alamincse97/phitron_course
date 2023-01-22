/*
#include<bits/stdc++.h>

using namespace std;

int main()
{
    // total complexity : O(n+n^2) = O(n^2)
    for(int i=0; i<n; i++) // O(n)
    {
        cout << i << "\n"; // O(1)
    } // O(n)

    for(int i=0; i<n; i++)// O(n*n) = O(n^2)
    {
        for(int j=0; j<n; j++) // O(n)
        {
            cout << i << " " << j << "\n";
        }
    }
}

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,q;
    cin >> n >> q;

    for(int i=0; i<n; i++) // O(n)
    {
        cout << i << "\n";
    }
    for(int i=0; i<q; i++) // O(q)
    {
        cout << i << "\n";
    }
    return 0;
}

#include<bits/stdc++.h>

using namespace std;

int main()
{
    // Time Complexity :- O(n^3)
    for(int i=0; i<n; i++) // -> O(n*n^2) = O(n^3)
    {
        for(int j=0; j<n; j++) // -> O(n*n) = (n^2)
        {
            for(int k=0; k<n; k++) // -> O(n)
            {
                cout << i << " " << j << " " << k << " "; // -> O(1)
            }
        }
    }
    return 0;
}

*/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    /*
    i = 0 -> n
    i = 1 -> n-1
    ..
    ...
    i = n-1 -> 1

    1 + 2 + 3 + ...+ n
    = n(n+1) / 2
    = n^2 + n / 2
    = n^2 / 2 + n/2
    = O(n^2/2)
    = O(n^2) constant part not allow
    */
    for(int i=0; i<n; i++) // -> O(n)
    {
        for(int j=i; j<n; j++) // -> O(n-i)
        {
            cout << i << " " << j << "\n"; // -> O(1)
        }
    }
    return 0;
}
