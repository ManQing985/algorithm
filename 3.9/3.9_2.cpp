#include <bits/stdc++.h>
using namespace std;
int a[100005];
int gcd(int a, int b)
{
  if(b == 0)  return a;
  return gcd(b, a % b);
}
int main()
{
  int n;
  cin >> n;
  for(int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  if (a[n - 1] == a[0]) 
  {
    cout << n << endl;
    return 0;
  }
  sort(a, a + n);
  
  int d = a[1] - a[0];
  for(int i = 2; i < n; i++)
  {
    d = gcd(d, a[i] - a[i - 1]);
  }

  int len = (a[n - 1] - a[0]) / d + 1;
  cout << len << endl;
  return 0;
}
