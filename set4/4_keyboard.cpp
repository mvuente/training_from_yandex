#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <vector>
//-----------------------------------
//ATTENTION!
//--std=c++11 flag required to compile
//-----------------------------------
using namespace std;

int main()
{
	int 			n, c, k, p;
	map<int, int>	keyboard;

	cin >> n;
	if (!n)
		return 0;
	vector<string>	res(n, "NO");
	for (int i = 1; i <= n; ++i)
	{
		cin >> c;
		keyboard[i] = c;
	}
	cin >> k;
	for (int i = 0; i < k; ++i)
	{
		cin >> p;
		keyboard[p]--;
		if (keyboard[p] < 0)
			res[p - 1] = "YES";
	}
	for (auto v : res)
		cout << v << endl;
	return 0;
}