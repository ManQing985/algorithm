#include <bits/stdc++.h>
using namespace std;
map<char, int> m;
int main()
{
  // 请在此输入您的代码
  string S;
  cin >> S;
  int maxn = 0;
  for(int i = 0; i < S.length(); i++)
  {
    m[S[i]]++;
    maxn = max({maxn, m[S[i]]});
  }

  for(map<char, int>::iterator it = m.begin(); it != m.end(); it++)
  {
    if(it->second == maxn)
    {
      cout << it -> first;
    }
  }
  return 0;
}
