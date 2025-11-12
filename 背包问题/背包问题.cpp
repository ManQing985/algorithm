#include <iostream>
#include <algorithm>
using namespace std;
int n,m;
int w[3500];
int d[3500];
int F[3500][13000] = {0};
int main()
{
	//输入 
	cin >> n >> m; //物品数量和背包容积 
	for(int i = 1; i <= n; ++i)
	{
		cin >> w[i] >> d[i];
	}
	//初始化第一件物品 
	for(int j = 0; j <= m; ++j)
	{
		if(j >= w[1])
		{
			F[1][j] = d[1];
		 } 
		else
		{
			F[1][j] = 0;
		}
	}
	
	//找出i件物品价值
	for(int i = 2; i <= n; ++i)
	{
		for(int j = 0; j <= m; ++j)
		{
			//不选i件
			F[i][j] = F[i - 1][j];
			if(j >= w[i])
			{
				F[i][j] = max(F[i][j],F[i - 1][j - w[i]] + d[i]);				
			} 
	    }
	} 
	cout << F[n][m] << endl;
	return 0;
} 
