#include <iostream>
using namespace std;
#include <cstring>
int visit[30][30];//标记有没有走过

int ways(int i, int j, int n)
{
	if (i < 0 || i >= 30 || j < 0 || j >= 30) 
	{
		return 0;
	}
	if(n == 0)
	    return 1;
	visit[i][j] = 1;
	int num = 0;
	if(!visit[i + 1][j])
	    num += ways(i + 1, j, n - 1);
	if(!visit[i][j + 1])
	    num += ways(i, j + 1, n - 1);
	if(!visit[i][j - 1])
	    num += ways(i, j - 1, n - 1);
	visit[i][j] = 0;
	return num;
}
int main()
{
	int n;
	cin >> n;
	memset(visit,0,sizeof(visit));
	cout << ways(0, 25, n) << endl;
	return 0;
}
