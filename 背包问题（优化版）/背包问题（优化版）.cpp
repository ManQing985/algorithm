#include <iostream>
#include <algorithm>
using namespace std;
int n,m;
int w[3500];
int d[3500];
int F[13000] = {0};
int main()
{
	//输入 
	cin >> n >> m; //物品数量和背包容积 
	for(int i = 1; i <= n; ++i)
	{
		cin >> w[i] >> d[i];
	}
	
	//用滚动数组的方法找出i件物品价值
	for (int i = 1; i <= n; ++i) 
	{
        for (int j = m; j >= w[i]; --j) 
		{ // 从大到小遍历
            F[j] = max(F[j], F[j - w[i]] + d[i]);
        }
    }
	cout << F[m] << endl;
	return 0;
} 
