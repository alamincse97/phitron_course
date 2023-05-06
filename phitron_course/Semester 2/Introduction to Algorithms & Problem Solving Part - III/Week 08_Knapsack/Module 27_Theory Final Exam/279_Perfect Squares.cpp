// https://leetcode.com/problems/perfect-squares/

#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

/*
  - state: return the minimum number of perfect square numbers that sum to n;
  - recurrence relation:
      totalSqr(n) = 1 + totalSqr(n- (i*i)) for all i from 1 to sqrt(n)
  - base case: totalSqr(0) -> return 0;
*/

class Solution
{
public:
    int totalSqr(vector<int>& dp, int n)
    {
        if(n == 0)
            return 0;

        if(dp[n] != -1)return dp[n];

        int ans = n;
        for (int i = 1; i * i <= n; i++)
        {
            ans = min(ans, 1 + totalSqr(dp, n - (i * i)));
        }

        dp[n] = ans;
        return ans;
    }
    int numSquares(int n)
    {
        vector<int> dp(n + 1, -1);

        return totalSqr(dp, n);
    }
};

int main()
{
    optimize();

    int n;
    cin >> n;
    Solution s;
    cout << s.numSquares(n) << "\n";

    return 0;
}
