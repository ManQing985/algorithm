#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
int n;
int a[N];
int cnt[10];
bool cmp(int a, int b)
{
  int A = a; int B = b;
  int cnt_a = 0;
  int cnt_b = 0;
  while(A)
  {
    cnt_a += cnt[A % 10];
    A /= 10;
  }
  while(B)
  {
    cnt_b += cnt[B % 10];
    B /= 10;
  }
  if(cnt_a == cnt_b) return a < b;
  return cnt_a < cnt_b;
}
int main()
{
  // 请在此输入您的代码
  cin >> n;
  cnt[0] = 1 , cnt[1] = 0 , cnt[2] = 0 , cnt[3] = 0 , cnt[4] = 1;
  cnt[5] = 0 , cnt[6] = 1 , cnt[7] = 0 , cnt[8] = 2 , cnt[9] = 1;
  
  for(int i = 1; i <= n; i++)
  {
    cin >> a[i];
  }
  sort(a + 1, a + 1 + n, cmp);
  for(int i = 1; i <= n; i++)
  {
    cout << a[i] << " ";
  }
  return 0;
}
