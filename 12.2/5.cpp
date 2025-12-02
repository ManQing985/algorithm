#include <iostream>
using namespace std;
int mouth[12] = { 31,28,31,30,31,30,31,31,30,31,30,31};

int main()
{
	while(1)
	{
		int y,m,d;
    int sum = 0;
		cin >> y >> m >> d;
		if(y == 0 && m == 0 && d == 0)
    {
      break;
    }
    else if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
    {
      mouth[1] = 29;
    }
    else
    {
      mouth[1] = 28;
    }
    for(int i = 0; i < m - 1; ++i)
    {
      sum += mouth[i];
    }
    sum += d;
    cout << sum << endl;
	} 
	return 0;
}
