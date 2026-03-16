#include <bits/stdc++.h>
using namespace std;
const int N = 2009;
int d[N][N];
int main()
{
  // 请在此输入您的代码
  int n, m;
  cin >> n >> m;
  for(int i = 0; i < m; i++)
  {
    int x1, y1;
    int x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    d[x1][y2]++;
    d[x1][y2 + 1]--;
    d[x2 + 1][y1]--;
    d[x2 + 1][y2 + 1]++;
  }

  for(int i = 1; i <= n; i++)
  {
    for(int j = 1; j <= n; j++)
    {
      d[i][j] += d[i - 1][j] + d[i][j - 1] - d[i - 1][j - 1];
      cout << (d[i][j] & 1);
    }
    cout << endl;
  }

  return 0;
}
