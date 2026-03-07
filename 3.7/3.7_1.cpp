#include <bits/stdc++.h>
using namespace std;
bool is_Prime(int n)
{
  if(n <= 1) return false;
  if(n == 2) return true;
  if(n % 2 == 0) return false;
  for(int i = 3; i <= sqrt(n); i += 2)
  {
    if(n % i == 0) 
    return false;
  }
  return true;
}
int main()
{
  // 请在此输入您的代码
 
 int count = 0;
 long long n = 2;
 long long ans;
 while(true)
 {
   if(is_Prime(n)) count++;
   if(count == 100002)
   {
     ans = n;
     break;
   }
   n++;
 }
 cout << ans;

  return 0;
}
