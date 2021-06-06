#include <iostream>
#include <istream>
#include <algorithm>

using namespace std;

bool mymin(int a, int b, int c, int d)
{
	return ((a == min(a, c) && b == min(b, d)) || ((a == min(a, d) && b == min(b, c))));
}

int main() {
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
	if (mymin(a, b, d, e) || mymin(b, c, d, e) || mymin(a, c, d, e))
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;

}