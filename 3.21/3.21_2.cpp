#include <iostream>

using namespace std;
int node[30];
int n, m;
void dfs(int u, int cnt)
{
  if(n - u + cnt < m) return;
  if(cnt == m)
  {
    for(int i = 1; i <= m; i++)
    {
      cout << node[i] << " ";
    }
    cout << endl;
    return;
  }
  for(int i = u + 1; i <= n; i++)
  {
    node[cnt + 1] = i;
    dfs(i, cnt + 1);
    node[cnt + 1] = 0;
  }
}
int main() 
{
  
  cin >> n >> m;
  dfs(0, 0);
  return 0;
}
