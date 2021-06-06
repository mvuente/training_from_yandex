#include <iostream>
#include <istream>
#include <algorithm>

using namespace std;

int main() {
	int 	a(0), b(0), c(0), tmp;
	string 	res;
	cin >> a >> b >> c;

	if (c < 0 || (a == 0 && b != c * c))
		res = "NO SOLUTION";
	else if (a == 0 && b == c * c)
		res = "MANY SOLUTIONS";
	else
	{
		if (((c * c - b) % a) != 0)
			res = "NO SOLUTION";
		else
			res = to_string((c * c - b) / a);
	}

	cout << res << endl;
	return 0;
}
