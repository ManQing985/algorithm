#include <iostream>
using namespace std;
#include <stack>
int main()
{
  // 请在此输入您的代码
  stack<char> stk;
  string s;
  cin >> s;
  for(auto c : s)
  {
    if(c == '(' || c == '[' || c == '{')  stk.push(c);
    else if(c == ')' || c == ']' || c == '}')
    {
      if(stk.empty())
      {
        cout << "N" << endl;
        return 0;
      }
      if(c == ')' && stk.top() == '(' || c == ']' && stk.top() == '[' || c == '}' && stk.top() == '{')
      {
        stk.pop();
	  }
    }
    else
    {
      cout << "N" << endl;
      return 0;
    }
  }
  if(stk.empty())  cout << "Y" << endl;
  else cout << "N" << endl;
  return 0;
}
