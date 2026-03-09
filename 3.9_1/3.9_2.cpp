#include <bits/stdc++.h>
using namespace std;
long long d[21];
void fd(int n)
{
  d[1] = 0;
  d[2] = 1;
  for(int i = 3; i <= 20; i++)
  {
    d[i] = (i - 1) * (d[i - 2] + d[i - 1]);
  }
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n;
  fd(n);
  while(cin >> n)
  {
    cout << d[n] << endl;
  }
  return 0;
}
