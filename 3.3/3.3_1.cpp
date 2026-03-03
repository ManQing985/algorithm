#include <iostream>
using namespace std;
int a[30];
int main()
{
  string n;
  cin >> n;
  int s = n.size();
  for(int i = 0; i < s; i++)
  {
    a[n[i] - 'a']++; //计数看之后符不符合要求
  }
  for(int i = 0; i < 26; i++)
  {
    if(a[i] != 0 && a[i] % 2 != 0)
    {
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;
  return 0;
}
