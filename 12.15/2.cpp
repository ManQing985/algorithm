#include <iostream>
#include <list>
using namespace std;
int main()
{
  // 请在此输入您的代码
  int n, k, m;
  cin >> n >> k >> m;
  list<int> circle;
  for(int i = 1; i <= n; i++)
  {
  	circle.push_back(i);
  }
  
  list<int>::iterator it = circle.begin();
  for(int i = 1; i < k; i++)
  {
  	it++;
  	if(it == circle.end())
  	{
     	it = circle.begin();
	  } 	
  }

  for(int i = 1; i <= n; i++)
  {
    for(int j = 0; j < m - 1; j++)
    {
      it++;
      if(it == circle.end())
  	{
     	it = circle.begin();
	  }
    }
    cout << *it << endl;
    it = circle.erase(it);
    if(it == circle.end())
  	{
     	it = circle.begin();
	  }
    
  }
  return 0;
}
