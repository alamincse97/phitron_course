/*
// n ta number nibo and n ta number sum korbo.

// Time O(n)
// Space O(n)

//Time Complexity analysis

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;    // O(1)
    cin >> n; // O(1)

    //vector<int>a; // O(1)
    vector<int> a(n); // O(n)

    for(int i=0; i<n; i++)
    {
        cin >> a[i]; // O(n)
    }

    int sum = 0; // O(1)

    for(int i=0; i<n; i++)
        sum = sum + a[i]; // O(n)
    cout << sum << "\n"; // O(1)

    //O(cn)
    //O(n)

    return 0;
}

// Space Complexity Analysis

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n); // O(n)

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    int sum = 0;

    for(int i=0; i<n; i++)
        sum = sum + a[i];
    cout << sum << "\n";

    return 0;
}

#include<bits/stdc++.h>

using namespace std;

int main()
{
    //Time: O(n^2)
    //Space: O(n^2)
    int n;
    cin >> n; O(1)

    vector<int> a(n*n); O(n^2)

    for(int i=0; i<n*n; i++)
    {
        cin >> a[i];
    }

    int sum = 0;

    for(int i=0; i<n*n; i++)
        sum = sum + a[i];
    cout << sum << "\n";

    return 0;
}
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    // space complexity :- O(1)
    // Time O(sqrt(n))
    int n;
    cin >> n; // O(1)
    for(int i=1; i*i<=n; i++) // i^2 <= n, i <= root n, O(root n)
    {
        if(n%i == 0)
        {
            cout << i << "\n"; // O(1)
            cout << (n/i) << "\n";
        }
    }
    return 0;
}
