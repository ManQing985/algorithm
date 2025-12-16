#include <iostream>
#include <list>
using namespace std;
int main()
{
  // 请在此输入您的代码
  int M;
  cin >> M;
  list<int> circle;
  for(int i = 1; i <= 10; i++)
  {
    circle.push_back(i);
  }

  while(M--)
  {
    int t;
    cin >> t;
    circle.remove(t);
    circle.push_front(t);
    for(auto s : circle)  cout << s << " ";
    cout << endl;
  }
  
  return 0;
}
