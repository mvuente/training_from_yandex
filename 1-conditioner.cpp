#include <iostream>
#include <istream>
#include <algorithm>

using namespace std;

int main() {
	int 	tstart(0), tfin(0);
	string 	regime("");
	cin >> tstart >> tfin;
	cin >> regime;
	if (regime == "heat")
		cout << max(tstart, tfin) << endl;
	else if (regime == "freeze")
		cout << min(tstart, tfin) << endl;
	else if (regime == "auto")
		cout << tfin << endl;
	else
		cout << tstart << endl;
	return 0;
}
