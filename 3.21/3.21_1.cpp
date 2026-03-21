#include <bits/stdc++.h>
using namespace std;
int main()
{
  // 请在此输入您的代码
  ios::sync_with_stdio(false);
  cin.tie(0);
  int a[10] = {1,0,0,0,1,0,1,0,2,1};
  vector<pair<int, int>> s;
  int n;
  cin >> n;
  for(int i = 1; i <= n; i++)
  {
    int x;
    cin >> x;
    int y, sum = 0;
    y = x;
    while(y)
    {
     sum += a[y % 10];
     y /= 10;  
    }
    s.push_back({sum, x});
  }
  sort(s.begin(), s.end());
  for(int i = 0; i < n; i++)  cout << s[i].second << " ";
  return 0;
}
