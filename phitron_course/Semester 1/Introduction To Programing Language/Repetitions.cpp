#include<bits/stdc++.h>

using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main()
{
  optimize();
  string s;
  cin >> s;
  int count = 1, ans = 1;

  for(int i=0; i<s.length() - 1; i++)
  {
      if(s[i] == s[i+1])
        count++;
      else
        count = 1;
      ans = max(ans, count);
  }
  cout << ans << endl;
  return 0;
}
