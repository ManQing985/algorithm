#include <iostream>
using namespace std;
int main()
{
  // 请在此输入您的代码(132)
  int n = 0;
  int count = 0;
  for(int i = 1; i <= 2020; ++i)
  {
    int temp = i;
	while(temp > 0)
	{
     n = temp % 10;
     if(n == 2) 
	 {
		count++; 
	 }
    temp /= 10;
	} 
  }
  cout << count << endl;
  return 0;
}
