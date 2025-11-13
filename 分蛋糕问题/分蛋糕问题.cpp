#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
const int INF = 0x3f3f3f3f;
int dp[20][20][20];

int ways(int w, int h, int m)
{
	//边界条件
	if(w * h < m + 1)
	{
		return INF; 
	 } 
	if(m == 0)
	{
		return w * h;
	}
	
	if (dp[w][h][m] != -1) 
	{
		return dp[w][h][m];
	}
	//最终最小值
	int min_value = INF; 
	//竖着切
	for(int i = 1; i < w; ++i)
	{
		int sv = INF;
		for(int k = 0; k < m; ++k)
		{
			int left = ways(i, h, k);
			int right = ways(w - i, h, m - 1 - k);
			sv = min(sv,max(left,right));
		}
		min_value = min(min_value,sv);
	}
	//横着切
	for(int j = 1; j < h; ++j)
	{
		int sh = INF;
		for(int k = 0; k < m; ++k)
		{
			int on = ways(w, j, k);
			int ubder = ways(w, h - j, m - 1 - k);
			sh = min(sh,max(on,ubder));
		}
		min_value = min(min_value,sh);
	}
	
	return dp[w][h][m] = min_value; 
 } 
int main()
{
	int w,h,m;
	memset(dp, -1, sizeof(dp));
	cin >> w >> h >> m;
	cout << ways(w,h,m - 1) << endl;
	return 0;
}
