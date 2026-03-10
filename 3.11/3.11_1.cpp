#include <bits/stdc++.h>
using namespace std;
void solve()
{
  string s;
  cin >> s;
  int cnt = 1;
  vector<int> p;
  int n = s.size();
  for(int i = 1; i < n; i++)
  {
    if(s[i] == s[i - 1] + 1 || s[i] == s[i - 1])
    {
      cnt++;
    }
    else
    {
      p.push_back(cnt);
      cnt = 1;
    }
  }
  p.push_back(cnt);

  //分块计算总数
  long long ans = 0;
  int m = p.size();
  for(int i = 0; i < m; i++)
  {
    int v = p[i];
    ans += 1LL * v * (v + 1) / 2;
    if(i > 0)
    {
      int w = p[i - 1];
      ans += 1LL * v * w;
    }
  }
  cout << ans << endl;
}
int main()
{
  // 请在此输入您的代码
  ios::sync_with_stdio(false);
  cin.tie(0);
  
  int t = 1;
  while(t--)
  {
    solve();
  }
  return 0;
}
