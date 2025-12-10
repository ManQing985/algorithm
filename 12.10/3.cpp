#include <iostream>
using namespace std;
const int N = 1010;
int q[N];
int hh = 1;
int tt = 0;
int main()
{
  // 请在此输入您的代码
  int m, n;
  cin >> m >> n;
  int ans = 0;
  int x;
  for(int i = 1; i <= n; ++i)
  {
    cin >> x;
    bool tag = false;
    for(int j = hh; j <= tt; ++j)
    {
      //是否重复
      if(q[j] == x)
      {
        tag = true;
        break;
      }
      //重复跳过
      if(tag)
      {
        continue;
      }
      //满缓存，跳队头
      if(tt - hh  + 1 == m)
      {
        hh++;
      }
      q[++tt] = x;
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}
