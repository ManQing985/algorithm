#include <iostream>
using namespace std;
int main()
{
  // 请在此输入您的代码
  long long a,b;
  cin >> a >> b;

  long long r = a % (b - a);
  long long key = (r == 0) ? 0 : b - a - r;
  cout << key << endl;

  return 0;
}
