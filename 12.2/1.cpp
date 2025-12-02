#include <iostream>
#include <string>
using namespace std;
int main()
{
  string a;
  int num = 0;
  int fuyin = 0;
  cin >> a;
  for(int i = 0; i < a.size(); ++i)
  {
    if(a[i] == 'a' || a[i] == 'e' ||a[i] == 'i' ||a[i] == 'o' ||a[i] == 'u')
    {
      num++;
    }
    else
    {
      fuyin++;
    }
    
  }
  cout << num << endl;
  cout << fuyin << endl;
  return 0;
}
