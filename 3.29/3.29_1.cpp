#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int a[N];
int b[N];

int main()
{
	int n; 
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	long long res = 0;
	for(int i = 1; i <= n/2; i++)
	{
		b[i] = a[i] - a[n - i +1];
	}
	for(int i = 2; i <= n/2; i++)
	{
		if(b[i] * b[i - 1] > 0)
		{
			int x = min(abs(b[i]), abs(b[i - 1]));
			res += x;
			if(b[i] > 0)
			{
				b[i] -= x;
				b[i - 1] -= x;
			}
			else
			{
				b[i] += x;
				b[i - 1] += x;
			}
		}
	 } 
	
	for(int i = 1; i <= n/2; i++)
	{
		res += abs(b[i]);
		
	}
	cout << res << endl;
	return 0;
}
