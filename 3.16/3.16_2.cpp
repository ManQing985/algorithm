#include <iostream>
#include <vector>
using namespace std;
int a[25];
int main() 
{
  int n;

  cin >> n;
  for(int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  long long ans = 0;
  for(int L = 0; L < n; L++)
  {
    long long Xor = 0;
    for(int R = L; R < n; R++)
    {
      Xor ^= a[R];
      ans += Xor;
    }
  }
  cout << ans << endl;
    return 0;
}
