#include <iostream>
#include <queue>
using namespace std;
int main()
{
  // 请在此输入您的代码
  string op, name, yn;
  int n;
  queue<string> qv,qn;
  cin >> n;
  for(int i = 1; i <= n; i++)
  {
    cin >> op;
    if(op == "IN")
    {
      cin >> name >> yn;
      if(yn == "V")  qv.push(name);
      else  qn.push(name);

    }
    else
    {
      cin >> yn;
      if(yn == "V")  qv.pop();
      else  qn.pop();
    }
  }

  while(qv.size())
  {
    cout << qv.front() << endl;
    qv.pop();
  }
  while(qn.size())
  {
    cout << qn.front() << endl;
    qn.pop();
  }
  return 0;
}
