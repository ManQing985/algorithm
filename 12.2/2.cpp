#include <iostream>
using namespace std;
int main()
{
  // 请在此输入您的代码
  int s[1010];
  int n;
  cin >> n;
  for(int i = 0; i < n; ++i)
  {
    cin >> s[i]; 
  }
  for(int i = 0; i < n; ++i)
  {
    if(s[i] != 0)
    {
    	cout << s[i] << " ";
	}
  }
  for(int i = 0;i < n; ++i)
  {
    if(s[i] == 0)
    {
    	cout << s[i] << " ";
	}
  }

  return 0;
}
