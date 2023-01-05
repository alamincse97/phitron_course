/*
1. sieve time complexity
2. prime number ber kore
3. n = 20 [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20]
4. prime{2, 3, 5, 7, 11, 13, 17, 19}
*/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int>primes;
    vector<bool>visited(n+1);

    // O(n * n/2) O(n^2)
    // i = 2, n/2
    // i = 3, n/3
    // i = 4, n/4
    // i = 5, n/5
    // i = 6, O
    //... ......
    // n/2 + n/3 + n/4 + n/5 + n/6 + ....+ n/n
    // n(1/2 + 1/3 + 1/4 + 1/5+ 1/6 +.. 1/n))
    // Harmonic Series
    // O(n log n)
    // or n(log(log n))
    for(int i=2; i<=n; i++)
    {
        if(visited[i] == false)
        {
            primes.push_back(i);
            for(int x = 2; i*x <= n; x++)
            {
               visited[i*x] = true;
            }
        }
    }
    cout << primes.size() << "\n";
    for(int i=0; i<primes.size(); i++)
        cout << primes[i] << " ";
    cout << "\n";
    return 0;
}
