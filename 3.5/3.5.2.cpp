#include <iostream>
using namespace std;
int main()
{
  // 请在此输入您的代码
  int sum = 0;

  for(int b = 0; b <= 255; ++b)
  {
    for(int r = 0; r <= 255; ++r)
    {
      for(int g = 0; g <= 255; ++g)
      {
        if(b > r && b > g)
        {
          sum++;
          
        }
      }
    }
  }
  cout << sum << endl;
  return 0;
}
