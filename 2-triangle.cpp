#include <iostream>
#include <istream>
#include <algorithm>

using namespace std;

int main() {
	int 	a(0), b(0), c(0);
	string 	res("NO");
	cin >> a >> b >> c;
	if (static_cast<unsigned int>(a + b) > c && static_cast<unsigned int>(a + c) > b && static_cast<unsigned int>(b + c) > a)
		res = "YES";
	cout << res << endl;
	return 0;
}