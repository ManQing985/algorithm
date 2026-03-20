#include <bits/stdc++.h>
using namespace std;

set<int> s;
int main()
{
  // 请在此输入您的代码
  ios::sync_with_stdio(false);
  cin.tie(0);
  int q;
  cin >> q;

  while(q--)
  {
    string a;
    int b;
    cin >> a >> b;
    if(a == "I")
    {
      s.insert(b);
    }
    else
    {
      cout << (s.count(b) ? "Yes" : "No") << endl;
    }
  }
  return 0;
}
