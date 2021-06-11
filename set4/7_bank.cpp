#include <fstream>
#include <iostream>
#include <sstream>
#include <map>
#include <vector>

using namespace std;

void 	balancer(string	name1, map<string, int>& bank, ofstream& ofs)
{
	if (bank.find(name1) == bank.end())
		ofs << "ERROR" << "\n";
	else
		ofs << bank[name1] << "\n";
}

void 	depositer(string name1, int sum, string action, map<string, int>& bank)
{
	if (action == "WITHDRAW")
		sum = -sum;
	bank[name1] += sum;
}

void	transferer(string name1, string name2, int sum, map<string, int>& bank)
{
	bank[name1] -= sum;
	bank[name2] += sum;
}

void	incomer(int sum, map<string, int>& bank)
{
	for (auto& b : bank)
	{
		if (b.second > 0)
		{
			b.second = b.second + (b.second * sum) / 100;
		}
	}

	return ;
}

int 	main()
{
	ifstream ifs("input.txt");
	if (!ifs)
		return 0;
	string 				str, action, name1, name2, sum;
	map<string, int>	bank;
	ofstream 			ofs("output.txt");
	while (ifs)
	{
		getline(ifs, str);
		istringstream iss(str);
		getline(iss, action, ' ');
		if (action == "BALANCE")
		{
			getline(iss, name1, ' ');
			balancer(name1, bank, ofs);

		}
		else if (action == "DEPOSIT" || action == "WITHDRAW")
		{
			getline(iss, name1, ' ');
			getline(iss, sum, ' ');
			depositer(name1, stoi(sum, nullptr), action, bank);
		}
		else if (action == "TRANSFER")
		{
			getline(iss, name1, ' ');
			getline(iss, name2, ' ');
			getline(iss, sum, ' ');
			transferer(name1, name2, stoi(sum, nullptr), bank);
		}
		else if (action == "INCOME")
		{
			getline(iss, sum, ' ');
			incomer(stoi(sum, nullptr), bank);
		}

	}
	ofs.close();
	return 0;
}
