#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);

  int n;
  cin >> n;
  vector<int> x(n), y(n);
  for(int i = 0; i < n; i++)
  {
    cin >> x[i];
  }
  for(int i = 0; i < n; i++)
  {
    cin >> y[i];
  }

  sort(x.begin(), x.end());
  sort(y.begin(), y.end());
  long long ans = 0;

  for(int i = 0; i < n; i++)
  {
    ans += abs(x[i] - y[i]);
  }
  cout << ans << endl;
  return 0;

}
