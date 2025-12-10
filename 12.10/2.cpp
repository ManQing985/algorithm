#include <iostream>
using namespace std;
const int N = 1e2; 
char s[N];
char stk[N];
int top; 
int main()
{
  // 请在此输入您的代码
  int n;
  cin >> n;
  cin >> s + 1;
  for(int i = 1; i <= n; ++i)
  {
    if(s[i] == ')')
	{
		if(top && stk[top] == '(')
		{
			top--;
			continue;
		}
	}
	stk[++top] = s[i]; 
  }
  if(top)  cout << "NO" << endl;
  else  cout << "YES" << endl;
  return 0;
}
