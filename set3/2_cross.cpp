#include <iostream>
#include <sstream>
#include <fstream>
#include <set>
#include <map>
#include <vector>

using namespace std;

int main()
{
	string		s1, s2;
	string		s;
	map<int, int>	m;//, m2;
	set<int>	res;
	ifstream	ifs("input.txt");

		getline(ifs, s);
		if(s.empty())
			return 0;
		stringstream	iss(s);
		while (getline(iss, s1, ' '))
			m[stoi(s1, nullptr)]++;
	getline(ifs, s);
	if(s.empty())
		return 0;
	stringstream	iss1(s);
	while (getline(iss1, s1, ' '))
	{
		if (m[stoi(s1, nullptr)] != 0)
			res.insert(stoi(s1, nullptr));
	}
	set<int>::iterator it = res.begin();
	ofstream 	outf("output.txt");
	while (it != res.end())
	{
		outf << *it << " ";
		it++;
	}
}