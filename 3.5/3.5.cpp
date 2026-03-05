#include <iostream>
using namespace std;
int a[1000];

int bitCount(int n)
{
  int count = 0;
  while(n > 0)
  {
    if(n % 2 == 1)
    {
      count++;
    }
    n /= 2;
  }
  return count;
}
int main()
{
  // 请在此输入您的代码
  int n, m;
  cin >> n;
  for(int i = 0; i < n; ++i)
  {
    cin >> a[i];
  }
  cin >> m;
  for(int i = 0; i < m; ++i)
  {
    for(int j = 0; j < n; ++j)
    {
      a[j] = a[j] * bitCount(a[j]);
    }
  }
  for(int i = 0;i < n; ++i)
  {
    cout << a[i] << " ";
  }
  return 0;
}
