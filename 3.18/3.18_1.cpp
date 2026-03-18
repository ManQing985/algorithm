#include <bits/stdc++.h>
using namespace std;
const int N = 3e5 + 9;
int n, m, a[N], one[N], l[N], r[N], zero;

int getone(int l, int r)
{
  return one[r] - one[l - 1];
}
int main() 
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cin >> n >> m;
  for(int i = 1; i <= m; i++)
  {
    cin >> l[i] >> r[i];
    a[l[i]]++;
    a[r[i] + 1]--;
  }

  for(int i = 1; i <= n; i++)
  {
    a[i] = a[i] + a[i - 1];
  }
  for(int i = 1; i <= n; i++)
  {
    one[i] = one[i - 1] + (a[i] == 1);
    zero += (a[i] == 0);
  }

  for(int i = 1; i <= m; i++)
  {
    cout << getone(l[i], r[i]) + zero << "\n";
  }
  return 0;
}
