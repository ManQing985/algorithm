#include <iostream>
using namespace std;
int f(int n)
{ 
  if(n > 10)
    return (2 * n * f(n - 6)) % 998244353;
  else if(n <= 10)
    return n * (n - 1);
}
int main()
{
  // 请在此输入您的代码
  int n;
  cin >> n;
  int m = f(n);
  cout << m << endl;
  return 0;
}
