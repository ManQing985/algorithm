#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);

  int L;
  cin >> L;

  vector<long long> v(L + 1, 0);
  for(int i = 1; i <= L; ++i)
  {
    for(int j = i; j <= L; j += i)
    {
      v[j] += 1;
    }
  }
  long long ans = 0;
  for(int i = 1; i < L; ++i)
  {
    for(int j = 1; j <= L - i; ++j)
    {
      long long d_i = v[i];
      long long d_j = v[j];
      ans += d_i * d_j;
    }
    
  }
  cout << ans << endl;
  return 0;
}
