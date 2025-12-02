#include <iostream>
using namespace std;
int main()
{
  // 请在此输入您的代码
  long long n;
  scanf("%lld", &n);
  n /= 1000; //毫秒换算成秒
  int s = n % 60;
  n /= 60;
  int time = n % 60;
  n /= 60;
  int h = n % 24;
  printf("%02d:%02d:%02d",h,time,s);
  return 0;
}
