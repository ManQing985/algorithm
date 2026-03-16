#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main()
{
  // 请在此输入您的代码
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  cin >> n;
  vector<ll> a(n);
  for(int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  ll ans = 0;
  for(int k = 0; k < 21; k++)
  {
    ll c0 = 0;
    ll s0 = 0;
    ll c1 = 0;
    ll s1 = 0;
    ll sk = 0;
    for(int i = 0; i < n; i++)
    {
      ll val = a[i];
      if((val >> k) & 1)
      {
        sk += (ll)i * c0 - s0;
        c1++;
        s1 += i;

      }
      else
      {
        sk += (ll)i * c1 - s1;
        c0++;
        s0 += i;
      }
    }
    ans += sk * ((ll)1 << k);
  }
  cout << ans << endl;
  return 0;
}
