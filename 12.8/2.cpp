#include <iostream>
using namespace std;
int main()
{
  // 请在此输入您的代码
  int a[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  int week = 6;
  int sum = 0;
  for(int y = 2022; y <= 2022; ++y)
  {
    if(y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
      a[2] = 29;
    else
      a[2] = 28;
    for(int m = 1; m <= 12; ++m)
    {
      for(int d = 1; d <= a[m]; ++d)
      {
        if(week == 6 || week == 0 || d % 10 == 1)
        {
          sum++;
        }
        week = (week + 1) % 7;
      }
    }
  }
  cout << sum << endl;
  return 0;
}
