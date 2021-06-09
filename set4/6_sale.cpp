#include <iostream>
#include <sstream>
#include <fstream>
#include <map>

using namespace std;

//-----------------------------------
//ATTENTION!
//--std=c++11 flag required to compile
//-----------------------------------

int main()
{
	ifstream ifs("input.txt");
	if (!ifs)
		return 0;
	string str, name, sku, amnt;
	map<string, map<string, long> >	customer; // map with whole info about sales
	map<string, long>				goods; // map for every customer
	while (ifs)
	{
		getline(ifs, str);
		istringstream 				iss(str);
		getline(iss, name, ' '); //get customer name
		getline(iss, sku, ' '); //get sku value
		getline(iss, amnt, ' '); // get amount of the sku
		if (name != "")
			customer[name][sku] += stol(amnt, nullptr); //adding info into the map
	}
	ifs.close();
	ofstream							ofs("output.txt");
	for (auto cust : customer)
	{
		ofs << cust.first << ":\n";
		for (auto gds : cust.second)
		{
			ofs << gds.first << " " << gds.second << "\n";
		}
	}
	ofs.close();
	return 0;
}