#include <sstream>
#include <iostream>
#include <map>

using namespace std;

int main()
{
	int N;
	string test;
	string 	str, word1, word2, word;
	getline(cin, str);

	if (str == "0")
		return 0;
	N = stoi(str, nullptr);


	map<string, string>	dict;
	for (int i = 0; i < N; ++i)
	{
		getline(cin, str);
		istringstream iss(str);
		getline(iss, word1, ' ');
		getline(iss, word2, ' ');
		dict[word1] = word2;
		dict[word2] = word1;
	}

	getline(cin, word);
	if (dict.find(word) != dict.end())
		cout << dict[word] << endl;
	return 0;
}
