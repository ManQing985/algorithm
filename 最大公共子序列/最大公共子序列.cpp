#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
char s1[1000];
char s2[1000];
int maxlen[1000][1000];
int main()
{
	//输入数据 
	cin >> s1 >> s2; 
	int lengthS1 = strlen(s1);
	int lengthS2 = strlen(s2);
	
	//初始条件	
	for(int i = 0; i < lengthS1; i++)
	{
		maxlen[i][0] = 0;
	}
	for(int j = 0; j < lengthS2; j++)
	{
		maxlen[0][j] = 0;
	}
	
	//递推公式
	for(int i = 1; i <= lengthS1; i++)
	{
		for(int j = 1; j <= lengthS2; j++)
		{
			if(s1[i-1] == s2[j - 1])
	            maxlen[i][j] = maxlen[i - 1][j - 1] + 1;
	        else
	            maxlen[i][j] = max(maxlen[i - 1][j], maxlen[i][j - 1]);
		}
	} 
		
	cout << maxlen[lengthS1][lengthS2] << endl; 

	return 0;
} 
