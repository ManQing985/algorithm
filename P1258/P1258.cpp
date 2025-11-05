#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	double a,b,s,x;
	double time;
	cin >> s >> a >> b;
	x = (a + b) * s / (b + 3 * a);
	time = x/b + (s-x)/a;
	cout << fixed << setprecision(6) << time << endl;
	return 0;
}
