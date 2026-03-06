#include <iostream>
using namespace std;
int f(int x)
{
  if(x <= 10)
  {
    return x * (x - 1) % 998244353;
  }
  else if(x > 10)
  {
    return (2 * x * f(x - 6)) % 998244353;
  }
}
int main()
{
  // 请在此输入您的代码
  int n;
  cin >> n;
  cout << f(n) << endl;
  return 0;
}
