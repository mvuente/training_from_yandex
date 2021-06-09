#include <iostream>
#include <sstream>
#include <fstream>
#include <map>

using namespace std;

int main()
{
	string 				str, word, res("");
	int 				maxi(0), tmp;
	map<string, int>	dict;
	ifstream 			ifs("input.txt");

	while (ifs)
	{
		getline(ifs, str);
		istringstream isr(str);
		while (getline(isr, word, ' '))
		{
			dict[word]++;
			tmp = dict[word];
			if (tmp > maxi || (tmp == maxi && word < res))
			{
				maxi = tmp;
				res = word;
			}
		}
	}
	ifs.close();
	if (res.size() != 0)
	{
		ofstream ofs("output.txt");
		ofs << res;
		ofs.close();
	}

	return 0;
}