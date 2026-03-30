#include <bits/stdc++.h>
using namespace std;
long long n, m , k;
bool ck(long long x)
{
  long long count = 0;
  for(int i = 1; i <= n; i++)
  {
    count += min(m, x/i);
  }
  if(count >= k)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
int main()
{
  cin >> n >> m >> k;
  long long  l = 1;
  long long r = n * m;
  while(l < r)
  {
    long long mid = (l + r) / 2;
    if(ck(mid))
    {
      r = mid;
    }
    else
    {
      l = mid  + 1;
    }
  }
  cout << l << endl;
  return 0;
}
