#include <iostream>
using namespace std;
int count;
int m;
void hanoi(string A, string B, string C, int n)
{
  if(n == 1)
  {
    count++;
    if(count == m)
    {
      cout << "#" << n << ":" << A << "->" << C << endl;
    }
  }
  else
  {
    hanoi(A, C, B, n - 1);
    count++;
    if(count == m)
    {
      cout << "#" << n << ":" << A << "->" << C << endl;
    }
    hanoi(B, A, C, n - 1);
  }
}
int main()
{
  // 请在此输入您的代码
  int n;
  cin >> n >> m;
  hanoi("A", "B", "C", n);
  cout << count << endl;
  return 0;
}
