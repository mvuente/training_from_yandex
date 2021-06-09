#include <fstream>
#include <iostream>
#include <sstream>
#include <map>

using  namespace std;

int main()
{
	ifstream ifs("input.txt");
	if (!ifs)
		return 0;
	string str, word;
	ofstream ofs("output.txt");
	map<string, int>	dict;
	while (ifs)
	{
		getline(ifs, str);
		stringstream iss(str);
		while (getline(iss, word, ' '))
		{
			ofs << dict[word] << " ";
			dict[word]++;
		}
	}
	ofs.close();
	ifs.close();
	return 0;
}