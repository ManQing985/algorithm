#include <iostream>
using namespace std;
const int N = 35;
const int maxn = 30;
long long c[N][N];
long long D[N];

void f1()
{
  for(int i = 0; i <= maxn; ++i)
  {
    c[i][0] = 1;
    c[i][i] = 1;
    for(int j = 1; j <= i; ++j)
    {
      c[i][j] = c[i - 1][j - 1] + c[i - 1][j];
    }
  }
}

void fD()
{
  D[1] = 0;
  D[2] = 1;
  for(int i = 3; i <= maxn; ++i)
  {
    D[i] = (i - 1) * (D[i - 1] + D[i - 2]);
  }
}

int main()
{
  // 请在此输入您的代码
  f1(); //组合数
  fD();
  long long result = c[28][14] * D[14];
  cout << result;
  return 0;
}
