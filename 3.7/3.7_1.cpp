#include <bits/stdc++.h>
using namespace std;
bool is_prime(int n)
{
  if(n <= 1) return false;
  if(n == 2) return true;
  if(n % 2 == 0) return false;
  for(int i = 2; i <= sqrt(n); ++i)
  {
    if(n % i == 0) return false; 
  }
  return true;
}
int main()
{
  // 请在此输入您的代码
  int cnt = 0;
  int n = 2;
  int ans;
  while(true)
  {
    if(is_prime(n)) cnt++;
    if(cnt == 2025)
    {
      ans = n;
      break;
    }
    n++;	
  }
  cout << ans;
  return 0;
}
