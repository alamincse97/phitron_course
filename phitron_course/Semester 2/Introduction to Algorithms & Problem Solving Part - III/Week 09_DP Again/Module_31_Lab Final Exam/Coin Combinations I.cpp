#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
  int n, money;
  cin >> n >> money;

  vector<int> coins(n), dp(money+1, 0);

  for (int i = 0; i < n; i++) {
    cin >> coins[i];
  }

  dp[0] = 1;
  for (int i = 1; i <= money; i++){
    for(int coin: coins) {
      if(coin <= i) {
        dp[i] = (dp[i] + dp[i - coin]) % MOD;
      }
    }
  }

  cout << dp[money];
  return 0;
}
