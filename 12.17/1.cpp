#include <iostream>
using namespace std;
int main()
{
  // 请在此输入您的代码
  int sum1 = 0;
  int sum2 = 0;
  int s;
  cin >> s;
  for (int i = 0; i < s; ++i)
  {
  	int n;
  	cin >> n;
    if(n >= 60)  sum1++;
    if(n >= 85)  sum2++;
  }
  double a = (int)((double)sum1 / s * 100 + 0.5);
  double b = (int)((double)sum2 / s * 100 + 0.5);

  cout << a << "%" << endl;
  cout << b << "%" << endl;
  
  return 0;
}
