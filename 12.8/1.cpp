#include <iostream>
using namespace std;
int a[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int s[] = {13,1,2,3,5,4,4,2,2,2};
int main()
{
  // 请在此输入您的代码
  int sum = 0;
  for(int y = 2000; y <= 2024; ++y)
  {
    if(y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
      a[2] = 29;
    else
      a[2] = 28;
    int number1 = 0;
    int Y = y;
    while(Y)
    {
      number1 += s[Y % 10];
      Y /= 10;
    }
    for(int m = 1; m <= 12; ++m)
    {
      int number2 = number1;
      number2 += s[m % 10];
      number2 += s[m / 10];
      for(int d = 1; d <= a[m]; ++d)
      {
        int number3 = number2;
        number3 += s[d % 10];
        number3 += s[d / 10];
        if(number3 > 50)
        {
          sum++;
        }
        if(y == 2024 && m == 4 && d == 13)
        {
          cout << sum << endl;
        }
      }
    }
  }
  return 0;
}
