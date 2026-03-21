#include <bits/stdc++.h>
using namespace std;
int n,m;
const int dx[] = {1, -1, 0, 0};
const int dy[] = {0, 0, -1, 1};
int dis[103][103];
int mp[103][103];
int main()
{
  // 请在此输入您的代码
  
  cin >> n >> m;
  for(int i = 1; i <= n; i++)
  {
    for(int j = 1; j <= m; j++)
    {
      cin >> mp[i][j];
      dis[i][j] = -1;
    }
  }
  int x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;

  queue<pair<int, int>> q;
  if(mp[x2][y2] == 0)
  {
    cout << -1 << endl;
    return 0;
  }

  q.push({x1, y1});
  dis[x1][y1] = 0;
  while(!q.empty())
  {
    int x = q.front().first;
    int y = q.front().second;
    q.pop();
    for(int i = 0; i < 4; ++i)
    {
      int xx = x + dx[i];
      int yy = y + dy[i];

      if(mp[xx][yy] == 1 && dis[xx][yy] == -1)
      {
        dis[xx][yy] = dis[x][y] + 1;
        q.push({xx, yy});
      }
    }
  }
  cout << dis[x2][y2] << endl;
  return 0;
}
