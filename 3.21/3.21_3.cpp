#include <iostream>
using namespace std;
int n;
int node[30];
int v[30];
void dfs(int cnt)
{
  if(cnt == n)
    {
      for(int i = 1; i <= n; i++)
      {
        cout << node[i] << " ";

      }
      cout << endl;
      return;
    }
  for(int i = 1; i <= n; i++)
  {
    
    if(!v[i])
    {
      v[i] = 1;
      node[cnt + 1] = i;
      dfs(cnt + 1);
      node[cnt + 1] = 0;
      v[i] = 0;
    }
  }
}
int main()
{
  // 请在此输入您的代码
  cin >> n;
  dfs(0);
  return 0;
}
