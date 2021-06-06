#include <iostream>
#include <istream>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;

void vectorizer(vector<int>& tmp, int a, int b, int c, int d)
{
	if (!tmp.empty())
		tmp.clear();
	tmp.push_back(a + b);
	tmp.push_back(max(c, d));
}

int main() {
	int a1, b1, a2, b2;
	cin >> a1 >> b1 >> a2 >> b2;

	map<int, vector<int>>	table;
	vector<int>				tmp;
	vectorizer(tmp, a1, a2, b1, b2);
	table[tmp[0] * tmp[1]] = tmp;
	vectorizer(tmp, a1, b2, b1, a2);
	table[tmp[0] * tmp[1]] = tmp;
	vectorizer(tmp, b1, b2, a1, a2);
	table[tmp[0] * tmp[1]] = tmp;
	vectorizer(tmp, b1, a2, a1, b2);
	table[tmp[0] * tmp[1]] = tmp;
	cout << table.begin()->second[0] << " " << table.begin()->second[1] << endl;
	return 0;
}