#include <iostream>
using namespace std;
#include <cstring>
#include <vector>
int K, N, R;
int minLen, totalCost, totalLen;
struct Road
{
	int d,l,t;
};
vector< vector <Road> > G(130);
int visited[130];

void dfs(int s)
{
	if(s == N)
	{
		minLen = min(minLen,totalLen);
		return;
	}
	for(int i = 0; i < G[s].size(); ++i)
	{
		Road r = G[s][i];
		if(totalCost + r.d > K)  continue;
		if(!visited[r.d])
		{
			totalCost += r.t;
			totalLen += r.l;
			visited[r.d] = 1;
			dfs(r.d);
			visited[r.d] = 0;
			totalCost -= r.t;
			totalLen -= r.l;			
		} 
	} 
}
int main()
{
	cin >> K >> N >> R;
	for(int i = 0; i < R; ++i)
	{
		int s;
		Road r;
		cin >> s >> r.d >> r.l >> r.t;
		if(s != r.d)
		{
			G[s].push_back(r);
		}
	}
	minLen = 1 << 30;
	totalLen = 0;
	totalCost = 0;
	visited[1] = 1;
	dfs(1);
	if(minLen < (1 << 30))
	{
		cout << minLen << endl;
	}
	else
	{
		cout << "-1" << endl; 
	}
	return 0;
}
