#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n, m, s;
int main()
{
  // 请在此输入您的代码
  cin >> n >> m;
  int s = 0;
  vector<int> l(m  + 1), r(m + 1);
  for(int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    
    if(abs(x) <= m && x < 0)
    {
      l[-x]++;
    }
    else if(abs(x) <= m && x > 0)
    {
      r[x]++;
    }
    else if(x == 0)
    {
      s++;
    }
  }
  for(int i = 1; i <= m; i++)
    {
      l[i] += l[i - 1];
      r[i] += r[i - 1];
    }

    int ans = max({l[m], r[m]});
    for(int i = 1; i <= m / 2; i++)
    {
      int sr = r[i] + l[m - 2 * i];
      int sl = l[i] + r[m - 2 * i];
      ans = max({ans,sr, sl});
    }
    ans += s;
    cout << ans << endl;
    
  return 0;
}
