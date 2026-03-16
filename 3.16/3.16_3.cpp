#include <bits/stdc++.h>
using namespace std;
int main()
{
  // 请在此输入您的代码
  int k;
  cin >> k;
  string S;
  cin >> S;
  
  char c1, c2;
  cin >> c1 >> c2;
  int n = S.size();
  long long ans = 0;
  for(int i = 0; i < n; i++)
  {
    if(S[i] != c1)  continue;
    for(int j = i; j < n; j++)
    {
      int len = j - i + 1;
      if(S[j] == c2 && len >= k)
      {
        ans++;
      }
    }
    cout << ans << endl;
  }
  return 0;
}
