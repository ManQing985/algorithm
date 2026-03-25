#include <bits/stdc++.h>
using namespace std;
int main()
{
  // 请在此输入您的代码
  ios::sync_with_stdio(false);
  cin.tie(0);
  string s;
  cin >> s;
  int cnt = 0;
  for(int i = 0; i < s.length(); i++)
  {
    string s1 = s.substr(i, 3);
    if(s1 == "lqb" || s1 == "lbq" || s1 == "qlb" || s1 == "qbl" || s1 == "blq" || s1 == "bql")
    {
      cnt++;
      i += 2;
    }
  }
  cout << cnt << endl;
  return 0;
}
