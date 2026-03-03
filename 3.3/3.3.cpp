#include <iostream>
using namespace std;
int n,sum;
int a[105];
int main()
{
  // 请在此输入您的代码
  cin >> n;
  for(int i = 0; i < n; ++i)
  {
    cin >> a[i];
    sum += a[i];
  }
  cout << sum << endl;
  return 0;
}
